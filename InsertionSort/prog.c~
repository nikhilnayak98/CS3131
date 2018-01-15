/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Insertion Sort
*/
#include "stdio.h"
void sort(int[], int);
void main()
{
	int arr[] = {12,11,13,5,6}, n = 5, i;
	sort(arr, n);
	printf("\n");
	for(i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void sort(int arr[], int n)
{
	int i, j, key;
	for(i = 1; i < n ; i++)
	{
		key = arr[i];
		j = i - 1;
		while((j >= 0) && (arr[j] > key))
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
