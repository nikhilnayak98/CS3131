/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Swap Numbers
*/
#include "stdio.h"
void main()
{
	int a,b;
	printf("\n Enter A - ");
	scanf("%d", &a);
	printf("\n Enter B - ");
	scanf("%d", &b);
	printf("\n Before Swapping");
	printf("\n A - %d", a);
	printf("\n B - %d", b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\n After Swapping");
	printf("\n A - %d", a);
	printf("\n B - %d \n", b);
}
	


