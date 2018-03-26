/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Adjacency List
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct adjlistnode
{
	int dest;
	struct adjlistnode *next;
} adjlistnode;

typedef struct adjlist
{
	adjlistnode *head;
} adjlist;

typedef struct graph
{
	int V;
	adjlist *array;
} graph;

adjlistnode *newadjlistnode(int dest)
{
	struct adjlistnode *newNode = (adjlistnode*) malloc(sizeof(struct adjlistnode));
	newNode->dest = dest;
	newNode->next = NULL;
	return newNode;
}

graph *creategraph(int V)
{
	struct graph* graph = (struct graph*) malloc(sizeof(struct graph));
	graph->V = V;

	graph->array = (struct adjlist*) malloc(V * sizeof(struct adjlist));

	int i;
	for(i = 0; i < V; ++i)
		graph->array[i].head = NULL;

	return graph;
}

void add_edge(graph*, int, int);
void display_graph(graph*);

void main()
{
	int V = 5;
	graph *graph_matrix = creategraph(V);
	
	add_edge(graph_matrix, 0, 0);
	add_edge(graph_matrix, 2, 3);
	add_edge(graph_matrix, 0, 4);
	add_edge(graph_matrix, 2, 1);
	add_edge(graph_matrix, 2, 2);
	add_edge(graph_matrix, 4, 1);
	add_edge(graph_matrix, 0, 2);
	add_edge(graph_matrix, 3, 2);

	display_graph(graph_matrix);
}

void add_edge(graph *graph, int src, int dest)
{
	adjlistnode* newNode = newadjlistnode(dest);
	newNode->next = graph->array[src].head;
	graph->array[src].head = newNode;

	newNode = newadjlistnode(src);
	newNode->next = graph->array[dest].head;
	graph->array[dest].head = newNode;
}

void display_graph(graph *graph)
{
	int v;
	for(v = 0; v < (graph->V); v++)
	{
		adjlistnode *pCrawl = graph->array[v].head;
		printf("\nAdjacency list of vertex %d.", v);
		printf("\nhead ");
		while(pCrawl)
		{
			printf("-> %d", pCrawl->dest);
			pCrawl = pCrawl->next;
		}
		printf("\n");
	}
}
