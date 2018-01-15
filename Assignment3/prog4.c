/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Simulate multiplication by addition.
*/
#include "stdio.h"
int multiply(int, int);
void main()
{
	int a, b, result;
	printf("\n Enter a - ");
	scanf("%d", &a);
	printf("\n Enter b - ");
	scanf("%d", &b);
	result = multiply(a, b);
	printf("\n Result - %d", result);
}

int multiply(int a, int b)
{
	int result = 0, t = 1;
	if(a < 0)
	{
		t *= -1;
		a *= -1;
	}
	if(b < 0)
	{
		t *= -1;
		b *= -1;
	}
	
	while(b > 0)
	{
		result += a;
		b--;
	}
	
	return (result * t);
}
