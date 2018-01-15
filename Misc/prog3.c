/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Data type check
*/
#include "stdio.h"
#include "math.h"
void main()
{
	double n;
	printf("\n Enter value of n - ");
	scanf("%lf", &n);
	if((ceil(n) - n) == 0)
		printf("\n Integer \n");
	else
		printf("\n Float \n");
}
