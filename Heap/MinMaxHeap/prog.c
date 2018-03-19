/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Min and max heap implementation
*/
#include <stdio.h>
#include <stdlib.h>
int leftchild(int);
int rightchild(int);
int parent(int);
void minheap(int[], int[], int);
void maxheap(int[], int[], int);
void display(int[], int);
void heap_insert(int[], int, int*, int, int);
void bubble_up(int[], int);
void bubble_down(int[], int);

void main()
{
	int i, S[] = {0, 7, 8, 14, 10, 9, 16, 2, 3, 1, 4}, n = 11, A[n];
	
	for(i = 0; i < n; i++)
	{
		A[i] = 0;
	}
	
	display(S, n);
	minheap(A, S, n);
	display(A, n);
}

int leftchild(int i)
{
	return (2 * i);
}

int rightchild(int i)
{
	return (2 * i) + 1;
}

int parent(int i)
{
	return ((i)/ 2);
}

void minheap(int A[], int S[], int n)
{
	int i, heapsize = 0, flag = 0;
	for(i = 1; i < n; i++)
	{
		heap_insert(A, S[i], &heapsize, n, flag);
	}
}

void maxheap(int A[], int S[], int n)
{
	int i, heapsize = 0, flag = 1;
	for(i = 1; i < n; i++)
	{
		heap_insert(A, S[i], &heapsize, n, flag);
	}
}

void heap_insert(int A[], int x, int *heapsize, int n, int flag)
{
	if(*heapsize >= n)
	{
		printf("\nHeap is full.");
		return ;
	}
	else
	{
		*heapsize += 1;
		A[*heapsize] = x;
		if(flag == 0)
			bubble_up(A, *heapsize);
		else
			bubble_down(A, *heapsize);
	}
}

void bubble_up(int A[], int i)
{
	if(parent(i) == 0)
		return ;
	if(A[parent(i)] > A[i])
	{
		int temp;
		temp = A[parent(i)];
		A[parent(i)] = A[i];
		A[i] = temp;
		bubble_up(A, parent(i));
	}	
}

void bubble_down(int A[], int i)
{
	if(parent(i) == 0)
		return ;
	if(A[parent(i)] < A[i])
	{
		int temp;
		temp = A[parent(i)];
		A[parent(i)] = A[i];
		A[i] = temp;
		bubble_down(A, parent(i));
	}	
}

void display(int A[], int n)
{
	int i;
	printf("\n");
	for(i = 1; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
}
