/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Sum of series 1, -3, 5, -7
*/
#include "stdio.h"
void main()
{
	int n, t = -1, j = 1;
	double sum = 0;
	printf("\n Enter value of n - ");
	scanf("%d", &n);
	while(n != 0)
	{
		t *= -1;
		printf("%d ,", j*t);
		sum += j*t;
		j += 2;
		n--;
	}
	printf("\n Sum - %.3f \n", sum);
}
