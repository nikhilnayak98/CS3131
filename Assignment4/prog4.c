/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Compute to compute e to n terms, e=(1/0!)+(1/1!)+(1/2!)+(1/3!)+.....
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
		printf("\ne - %f\n", sum);
	}
	else
	{
		while(i <= n)
		{
			term = (i - 1) * term;
			sum += 1/term;
			i++;
		}
		printf("\ne - %f\n", sum);
	}
}
