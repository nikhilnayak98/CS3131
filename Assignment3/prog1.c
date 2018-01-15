/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Compute 1/n!
*/
#include "stdio.h"
void main()
{
	int n;
	double fact = 1;
	printf("\n Enter a number - ");
	scanf("%d", &n);
	while(n != 0)
	{
		fact *= n;
		n--;
	}
	printf("\n 1/n! - %f", 1/fact);
}
