/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Average Numbers
*/
#include "stdio.h"
void main()
{
	int i,j;
	printf("\n Enter number of inputs - ");
	scanf("%d", &i);
	double num[i], sum = 0, average;
	printf("\n Enter numbers - \n");
	for(j = 0; j < i; j++)
	{
		scanf("%lf", &num[j]);
		sum += num[j];
	}
	average = sum/i;
	printf("\n Average - %.3f \n", average);
}


