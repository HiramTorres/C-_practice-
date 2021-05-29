#include <stdio.h>
 
int main()
{
    int x[10] = {1,1,1,0,0,1,2,1,2,4};
    int h[2] = {0,1};

    int y[11];

    int n, k, acc, kmin, kmax;

    for(n = 0; n < 11; n++)
    {
        acc = 0;
 
        kmin = ( n >= 1) ? n - 1 :  0;
        kmax = ( n < 9 ) ? n : 9;
 
        for (k = kmin; k <= kmax; k++)
        {
 
            acc += x[k] * h[n - k];
        }
        y[n] = acc;
        printf("%d",acc);
    }
    return 0;
}