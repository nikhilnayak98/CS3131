/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Chocolate Station problem
*/
#include <stdio.h>
void main()
{
	int T, N, i, k, p, choc, curr, diff, cost;
	scanf("%d", &T);
	
	for(k = 0; k < T; k++)
	{
		scanf("%d", &N);
		int a[N];
		
		for(i = 0; i < N; i++)
		{
			scanf("%d", &a[i]);
		}
		
		scanf("%d", &p);
		choc = a[0];
		curr = 0;

		for(i = 0; i < N - 1; i++)
		{
			diff = a[i] - a[i + 1];
			curr += diff;

			if(curr < 0)
			{
				choc += abs(curr);
				curr = 0;
			}
		}
	    cost = choc * p;
	    printf("%d\n", cost);
	}
}
