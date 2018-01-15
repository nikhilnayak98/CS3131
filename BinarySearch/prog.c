/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Binary Search
*/
#include "stdio.h"
int binary_search(int[],int,int,int);
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
	
	int pos = binary_search(arr, 0, n, num);
	if(pos == -1)
	{
		printf("\n Not found ");
	}
	else
	{
		printf("\n Found at position - %d ", (pos + 1));
	}
}

int binary_search(int A[],int lb,int ub,int num)
{
	int mid;

	if(lb > ub)
		return -1;

	mid = (lb + ub)/2;

	if(A[mid] == num)
		return mid;
	else if(A[mid] > num)
		return binary_search(A, lb, mid - 1, num);
	else if(A[mid] < num)
		return binary_search(A, mid + 1, ub, num);

	return 0;
}
