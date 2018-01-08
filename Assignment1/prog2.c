/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Swap Numbers
*/
#include "stdio.h"
void main()
{
	int a,b,c,temp;
	printf("\n Enter A - ");
	scanf("%d", &a);
	printf("\n Enter B - ");
	scanf("%d", &b);
	printf("\n Enter C - ");
	scanf("%d", &c);
	printf("\n Before Swapping");
	printf("\n A - %d", a);
	printf("\n B - %d", b);
	printf("\n C - %d", c);
	temp = a;
	a = c;
	c = b;
	b = temp;
	printf("\n After Swapping");
	printf("\n A - %d", a);
	printf("\n B - %d", b);
	printf("\n C - %d \n", c);
}
	
