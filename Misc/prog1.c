/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - 1, -1, 1, -1
*/
#include "stdio.h"
void main()
{
	int n,i,t = -1;
	printf("\n Enter value of n - ");
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		t *= -1;
		printf("%d ,",t);
	}
}
