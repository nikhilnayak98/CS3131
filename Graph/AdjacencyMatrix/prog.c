/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Adjacency Matrix
*/
#include <stdio.h>
#define ROW 5
#define COL 5
void find_edges(int[][COL]);
void add_edges(int[][COL], int, int);
void main()
{
	int graph_matrix[ROW][COL], i ,j;
	
	for(i = 0; i < ROW; i++)
		for(j = 0; j < COL; j++)
			graph_matrix[i][j] = 0;
	
	add_edges(graph_matrix, 0, 0);
	add_edges(graph_matrix, 2, 3);
	add_edges(graph_matrix, 0, 4);
	add_edges(graph_matrix, 2, 1);
	add_edges(graph_matrix, 2, 2);
	
	find_edges(graph_matrix);
	
	printf("\n");
}

void find_edges(int graph_matrix[][COL])
{
	int i, j;
	
	for(i = 0; i < ROW; i++)
	{
		for(j = 0; j < COL; j++)
		{
			if(graph_matrix[i][j] == 1)
				printf("\nEdge exists between %d and %d", i , j);
		}
	}
}

void add_edges(int graph_matrix[][COL], int i, int j)
{
	graph_matrix[i][j] = 1;
}
