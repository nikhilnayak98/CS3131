/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - The largest factorial number present in n.
*/
#include "stdio.h"
void main()
{
	int i, n, temp, fact, var;
	printf("\n Enter a number - ");
	scanf("%d", &n);
	temp = n;
	for(i = n; i > 0; i--)
	{
		temp = i;
		fact = 1;
		var = 1;
		while(fact < temp)
		{
			fact *= var;
			if(fact == i)
			{
				printf("\n Largest factorial number - %d \n", var);
				exit(0);
			}
			temp--;
			var++;
		}
	}
}
