/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Sum of n Numbers
*/
#include "stdio.h"
void main()
{
	int i,j;
	printf("\n Enter number of inputs - ");
	scanf("%d", &i);
	double num[i], sum;
	printf("\n Enter numbers - \n");
	for(j = 0; j < i; j++)
	{
		scanf("%lf", &num[j]);
	}
	sum = num[0];
	for(j = 1; j < i; j++)
	{
		sum += num[j];
	}
	printf("\n Sum - %.3f \n", sum);
}

