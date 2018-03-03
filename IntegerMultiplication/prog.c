/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Integer Multiplication
*/
#include <stdio.h>
#include <math.h>
long prod(long, long);
long noOfDigit(long, long);
void main()
{
    long m, n;
    printf("\n Enter number 1 - ");
    scanf("%ld", &m);
    printf("\n Enter number 2 - ");
    scanf("%ld", &n);
    
    printf("\n Multiplication of %ld and %ld is - %ld\n", m, n, prod(m, n));
}
 
long prod(long u, long v)
{
    long x, y, w, z, n, m, p, q, r;
    n = noOfDigit(u, v);
    
    if(u == 0 || v == 0)
    {
        return 0;
    }
    else if(n <= 2)
    {
        return (u * v);
    }
    else
    {
        m = floor(n / 2);
        w = u/pow(10, m);
        x = u % (int)pow(10, m);
        y = v/ pow(10, m);
        z = v % (int)pow(10, m);
        
        p = prod(w, y);
        q = prod(x, z);
        r = prod(w + x, y + z);
        
        return (p * pow(10, 2 * m) + (r - p - q) * pow(10, m) + q);
    }
}
 
 
long noOfDigit(long m, long n)
{
    long max;
    int b = 0;
    
    if(m>=n)
        max=m;
    else
        max = n;

    while(max > 0)
    {
        max = max / 10;
        b++;
    }
    return b;
}