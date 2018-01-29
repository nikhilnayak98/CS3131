/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Compute cos(x) as defined by the infinite series expansion.
 */
#include "stdio.h"
#include "math.h"
void main()
{
	double i = 0, tcos = 1, term, x, error = 0.000001;
	printf("\nEnter x - ");
	scanf("%lf", &x);
	term = x;
	while(fabs(term) > error)
	{
		i += 2;
		term = ((x * x) / (i * (i - 1))) * (-1) * term;
		tcos += term;
	}
	printf("\ncos(%.0f) - %f\n", x, tcos);
}

