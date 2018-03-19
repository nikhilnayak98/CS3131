/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Heap Sort.
*/
#include <stdio.h>

int leftchild(int);
int rightchild(int);
int parent(int);
void minheap(int[], int[], int);
void heap_insert(int[], int, int);
void bubble_up(int[], int);
void heap_sort(int[], int[], int);
void display(int[], int);
int extract_min(int[]);
void bubble_down(int[], int);

int heapsize = 0;

void main()
{
	int i, S[] = {0, 7, 8, 14, 10, 9, 16, 2, 3, 1, 4}, n = 11, A[n];
	
	for(i = 0; i < n; i++)
	{
		A[i] = 0;
	}
	
	display(S, n);
	heap_sort(A, S, n);
	display(S, n);
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
	int i;
	for(i = 1; i < n; i++)
	{
		heap_insert(A, S[i], n);
	}
}

void heap_insert(int A[], int x, int n)
{
	if(heapsize >= n)
	{
		printf("\nHeap is full.");
		return ;
	}
	else
	{
		heapsize += 1;
		A[heapsize] = x;
		bubble_up(A, heapsize);
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

void heap_sort(int A[], int S[], int n)
{
	int i;
	minheap(A, S, n);
	for(i = 1; i < n; i++)
	{
		S[i] = extract_min(A);
	}
}

int extract_min(int A[])
{
	int min = -1;
	if(heapsize <= 0)
		printf("\nHeap is empty.");
	else
	{
		min = A[1];
		A[1] = A[heapsize];
		heapsize--;
		bubble_down(A, 1);
	}
	return min;
}

void bubble_down(int A[], int i)
{
	int l = leftchild(i), r = rightchild(i), smallest = i;
	
	if((l <= heapsize) && (A[l] < A[i]))
		smallest = l;
	if((r <= heapsize) && (A[r] < A[smallest]))
		smallest = r;
		
	if(smallest != i)
	{
		int temp;
		temp = A[i];
		A[i] = A[smallest];
		A[smallest] = temp;
		bubble_down(A, smallest);
	}	
}
