/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Counting Inversion
*/
#include "stdio.h"
int sort(int[], int, int);
int merge(int[], int, int, int);
void main()
{
	int i, arr[] = {22, 31, 4, 5, 8};
	printf("Inversion Count - %d", sort(arr, 0, 4));
	printf("\n");
}

int sort(int arr[], int l, int h)
{
	int mid, inv_count = 0;
	if(l < h)
	{
		mid = (l + h) / 2;
		inv_count += sort(arr, l, mid);
		inv_count += sort(arr, mid + 1, h);
		inv_count += merge(arr, l , h, mid);
	}
	return inv_count;
}

int merge(int arr[], int l ,int h, int m)
{
	int n1 = m - l + 1, n2 = h - m, k = 0, L[n1], R[n2], inv_count = 0, i = 0, j = 0;
	
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
			inv_count += (m - i);
		}
		k++;
	}
	
	while(i < n1)
		arr[k++] = L[i++];
	while(j < n2)
		arr[k++] = R[j++];
		
	return inv_count;
}
