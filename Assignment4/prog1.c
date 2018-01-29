/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Compute sin(x) as defined by the infinite series expansion.
 */
#include "stdio.h"
#include "math.h"
void main()
{
	double i = 1, tsin, term, x, error = 0.000001;
	printf("\nEnter x - ");
	scanf("%lf", &x);
	term = x;
	tsin = x;
	while(fabs(term) > error)
	{
		i += 2;
		term = ((x * x) / (i * (i - 1))) * (-1) * term;
		tsin += term;
	}
	printf("\nsin(%.0f) - %f\n", x, tsin);
}

