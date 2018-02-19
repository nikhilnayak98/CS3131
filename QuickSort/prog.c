/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Quick Sort
*/
#include "stdio.h"
void sort(int[], int, int);
int partition(int[], int, int);
void main()
{
	int arr[] = {4,8,1,9,2}, i;
	for(i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");	
	sort(arr, 0, 4);
	for(i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void sort(int arr[], int l, int h)
{
	if(l < h)
	{
		int pi = partition(arr, l , h);
		sort(arr, l, pi - 1);
		sort(arr, pi + 1, h);
	}
}

int partition(int arr[], int l, int h)
{
	int pivot = arr[h], i = l - 1, j, temp;
	for(j = l; j <= h; j++)
	{
		if(arr[j] < pivot)
		{
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	temp = arr[i + 1];
	arr[i + 1] = arr[h];
	arr[h] = temp;
	return (i + 1);
}
