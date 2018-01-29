/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Compute sum of the first n terms of the series fs=0!+1!+2!+3!+.....+n!.
 */
#include "stdio.h"
void main()
{
	double i = 2, sum = 1, term = 1, n;
	printf("\nEnter n - ");
	scanf("%lf", &n);

	if(n == 0)
	{
		printf("\nValue should be greater than 0\n");
	}
	else if(n == 1)
	{
		sum = 1;
		printf("\nsum - %f\n", sum);
	}
	else
	{
		while(i <= n)
		{
			term = (i - 1) * term;
			sum += term;
			i++;
		}
		printf("\nsum - %f\n", sum);
	}
}
