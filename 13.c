#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k)
{
    int andMax = 0, orMax = 0, xorMax = 0, andCal, orCal, xorCal;

    for(int i = 1; i < n; i++)
    {
        for(int j=i+1 ;j <= n; j++)
        {
            andCal = (i & j);
            orCal = (i | j);
            xorCal = (i ^ j);

            if((andCal < k) && (andCal > andMax))
            {
                andMax = andCal;
            }

            if((orCal < k) && (orCal > orMax))
            {
                orMax = orCal;
            }

            if((xorCal < k) && (xorCal > xorMax))
            {
                xorMax = xorCal;
            }
        }
    }

    printf("%d\n", andMax);
    printf("%d\n", orMax);
    printf("%d\n", xorMax);
}

int main13() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}

