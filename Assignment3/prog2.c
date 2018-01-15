/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Compute x^n/n!
*/
#include "stdio.h"
#include "math.h"
void main()
{
	int n, x, temp;
	double fact = 1;
	printf("\n Enter x - ");
	scanf("%d", &x);
	printf("\n Enter n - ");
	scanf("%d", &n);
	temp = n;
	while(n != 0)
	{
		fact *= n;
		n--;
	}
	x = pow(x, temp);
	printf("\n 1/n! - %f", x/fact);
}
