/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Print sequence without using multipication
*/
#include "stdio.h"
void main()
{
	int n,i = 1;
	printf("\n Enter value of n - ");
	scanf("%d", &n);
	while(n != 0)
	{
		printf("%d \t", i);
		i = i+i;
		n--;
	}
	printf("\n");
}
