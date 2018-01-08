/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Pos, Neg Numbers Count
*/
#include "stdio.h"
void main()
{
	double num;
	int i, pos = 0, neg = 0, j;
	printf("\n Enter number of inputs - ");
	scanf("%d", &i);
	for(j = 0; j < i; j++)
	{
		scanf("%lf", &num);
		if(num < 0)
			neg++;
		else
			pos++;
	}
	printf("\n Number of negative integers - %d", neg);
	printf("\n Number of positive integers - %d \n", pos);
}

	

