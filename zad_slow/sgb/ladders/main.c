#include<ctype.h>
#include<string.h>
#include"gb_graph.h"
#include"gb_words.h"
#include"gb_dijk.h"

/*preprocessing definitions */
#define quit_if(x,c) if(x){ fprintf(stderr,"Sorry I couldn't build a dictionary (trouble code %ld ) !\n",c); return c; }
#define a_dist(k) (*(p+k)<*(q+k) ? *(q+k)-*(p+k) : *(p+k) - *(q+k))
#define h_dist(k) (*(p+k)==*(q+k) ? 0:1)



/*global variables*/
char alph = 0;
char freq = 0;
char heur = 0;
char echo = 0;
unsigned long n = 0;
char randm = 0;
long seed = 0;
Graph *g;
long zero_vector[9];
Graph *gg;
char start[6], goal[6];
Vertex *vv, *uu;
long min_dist;
/*subroutines*/
long freq_cost(v)
Vertex *v;
{
    register long acc = v->weight;
    register long k = 16;
    while (acc)
	k--;
    acc >>= 1;
    return (k < 0 ? 0 : k);
}

long alph_dist(p, q)
register char *p, *q;
{
    return a_dist(0) + a_dist(1) + a_dist(2) + a_dist(3) + a_dist(4);
}

void plant_new_edge(v)
Vertex *v;
{
    Vertex *u = gg->vertices + gg->n;
    gb_new_edge(u, v, 1L);
    if (alph)
	u->arcs->len = (u->arcs - 1)->len = alph_dist(u->name, v->name);
    else if (freq) {
	u->arcs->len = freq_cost(v);
	(u->arcs - 1)->len = 20;
    }

}

long hamm_dist(p, q)
register char *p, *q;
{
    return h_dist(0) + h_dist(1) + h_dist(2) + h_dist(3) + h_dist(4);
}

long alph_heur(v)
Vertex *v;
{
    return alph_dist(v->name, goal);
}

long hamm_heur(v)
Vertex *v;
{
    return hamm_dist(v->name, goal);
}

long prompt_for_five(s, p)
char *s;
register char *p;
{
    register char *q;
    register long c;
    while (1) {
	printf("%s word: ", s);
	fflush(stdout);
	q = p;
	while (1) {
	    c = getchar();
	    if (c == EOF)
		return -1;
	    if (echo)
		putchar(c);
	    if (c == '\n')
		break;
	    if (!islower(c))
		q = p + 5;
	    else if (q < p + 5)
		*q = c;
	    q++;
	}
	if (q == p + 5)
	    return 0;
	if (q == p)
	    return 1;
	printf("(Please type five lowercase letters and RETURN.)\n");
    }
}





int main(int argc, char *argv[])
{

    /* scan the command line options */

    while (--argc) {
	if (strcmp(argv[argc], "-v") == 0) {
	    verbose = 1;
	} else if (strcmp(argv[argc], "-a") == 0)
	    alph = 1;

	else if (strcmp(argv[argc], "-f") == 0)
	    freq = 1;

	else if (strcmp(argv[argc], "-h") == 0)
	    heur = 1;

	else if (strcmp(argv[argc], "-e") == 0)
	    echo = 1;

	else if (sscanf(argv[argc], "-n%lu", &n) == 1)
	    randm = 0;

	else if (sscanf(argv[argc], "-r%lu", &n) == 1)
	    randm = 1;

	else if (sscanf(argv[argc], "-s%ld", &seed) == 1);
	else {
	    fprintf(stderr,
		    "Usage: %s [-v][-a][-f][-h][-e][-nN][-rN][-sN]\n",
		    argv[0]);
	    return -2;
	}
    }
    if (alph || randm)
	freq = 0;
    if (freq)
	heur = 0;
    /*set up the graph of words */

    g = words(n, (randm ? zero_vector : NULL), 0L, seed);
    quit_if(g == NULL, panic_code);
    /*confirm the options selected */
    if (verbose) {
	if (alph)
	    printf("(alphabetic distance selected)\n");
	if (freq)
	    printf("(frequency-based distances selected)\n");
	if (heur)
	    printf
		("(lowerbound heuristic will be used to focus the search)\n");
	if (randm)
	    printf("(random selection of %ld words with sedd %ld)\n", g->n,
		   seed);
	else
	    printf("(the graph has %ld words)\n", g->n);
    }
    /*Modify the edge lenghts, if the alph or freq option was selected */
    if (alph) {
	register Vertex *u;
	for (u = g->vertices + g->n - 1; u >= g->vertices; u--) {
	    register Arc *a;
	    register char *p = u->name;
	    for (a = u->arcs; a; a->next) {
		register char *q = a->tip->name;
		a->len = a_dist(a->loc);
	    }
	}
    } else if (freq) {
	register Vertex *u;
	for (u = g->vertices + g->n - 1; u >= g->vertices; u--) {
	    register Arc *a;
	    for (a = u->arcs; a; a = a->next)
		a->len = (freq_cost(a->tip));
	}
    }

    /*Modyfi the priority quene alghoritm if unequal edge lenghts are possible */
    if (alph || freq || heur) {
	init_queue = init_128;
	del_min = del_128;
	enqueue = enq_128;
	requeue = req_128;


    }




    while (1) {
	/*prompt the starting word */
	putchar('\n');
      restart:
	if (prompt_for_five("Starring", start) != 0)
	    break;
	if (prompt_for_five("    Goal", goal) != 0)
	    goto restart;


	/*find a minimal ladder from start to goal, if one exists print it */
	/*build the amplifed graph gg */
	gg = gb_new_graph(0L);
	quit_if(gg == NULL, no_room + 5);
	gg->vertices = g->vertices;
	gg->n = g->n;
	/*put the start word into gg and let uu point to it */
	(gg->vertices + gg->n)->name = start;
	uu = find_word(start, plant_new_edge);
	if (!uu)
	    uu = gg->vertices + gg->n++;

	/*put he goal word into gg and let vv point to it */
	if (strncmp(start, goal, 5) == 0)
	    vv = uu;
	else {
	    (gg->vertices + gg->n)->name = goal;
	    vv = find_word(goal, plant_new_edge);
	    if (!vv)
		vv = gg->vertices + gg->n++;
	}
	if (gg->n == g->n + 2)
	    /*check if start is adjactent to goal */
	    if (hamm_dist(start, goal) == 1) {
		gg->n--;
		plant_new_edge(uu);
		gg->n++;
	    }
	quit_if(gb_trouble_code, no_room + 6);

	/*let djikstra do the haard work */
	if (!heur)
	    min_dist = dijkstra(uu, vv, gg, NULL);
	else if (alph)
	    min_dist = dijkstra(uu, vv, gg, alph_heur);
	else
	    min_dist = dijkstra(uu, vv, gg, hamm_heur);
	/*print the answer */
	if (min_dist < 0)
	    printf("Sorry there no ladder from %s to %s. \n", start, goal);
	else
	    print_dijkstra_result(vv);
	/*remove all traces of gg */
	for (uu = g->vertices + gg->n - 1; uu >= g->vertices + g->n; uu--) {
	    register Arc *a;
	    for (a = uu->arcs; a; a = a->next) {
		vv = a->tip;
		vv->arcs = vv->arcs->next;
	    }
	    uu->arcs = NULL;
	}
	gb_recycle(gg);
    }
    return EXIT_SUCCESS;
}
