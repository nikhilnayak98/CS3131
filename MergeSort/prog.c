/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Merge Sort
*/
#include "stdio.h"
void sort(int[], int, int);
void merge(int[], int, int, int);
void main()
{
	int i, arr[] = {22, 31, 4, 5, 8};
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
	int mid;
	if(l < h)
	{
		mid = (l + h) / 2;
		sort(arr, l, mid);
		sort(arr, mid + 1, h);
		merge(arr, l , h, mid);
	}
}

void merge(int arr[], int l ,int h, int m)
{
	int n1 = m - l + 1, n2 = h - m, k = 0, L[n1], R[n2], i = 0, j = 0;
	
	for(k = 0; k < n1; k++)
		L[k] = arr[l + k];
	for(k = 0; k < n2; k++)
		R[k] = arr[m + k + 1];
	
	k = l;
	
	while(i < n1 && j < n2)
	{
		if(L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	
	while(i < n1)
		arr[k++] = L[i++];
	while(j < n2)
		arr[k++] = R[j++];
}
