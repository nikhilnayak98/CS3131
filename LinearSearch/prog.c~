/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Linear Search
*/
#include "stdio.h"
int linear_search(int[],int,int);
void main()
{
	int n, i, num;
	printf("\n Enter size of array - ");
	scanf("%d", &n);
	int arr[n];
	printf("\n Enter numbers \n");
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\n");
	
	printf("\n Numbers entered are \n");
	for(i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	printf("\n Enter number to be searched - ");
	scanf("%d", &num);
	
	int pos = linear_search(arr, n, num);
	if(pos == -1)
	{
		printf("\n Not found ");
	}
	else
	{
		printf("\n Found at position - %d ", pos);
	}
}

int linear_search(int A[],int n,int num)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(A[i] == num);
			return (i + 1);
	}
	return -1;
}
