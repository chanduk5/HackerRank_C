#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main6()
{
    int n = 0, sum = 0;

    printf("enter the size of array: ");
    scanf("%d", &n);

    int * arr = (int *) malloc(n * sizeof(int));

    for(int index = 0; index < n; index++)
    {
        printf("enter element %d:", (index+1));
        scanf("%d", (arr+index));
    }

    for(int index = 0; index < n; index++)
    {
        sum = sum + (*(arr+index));
    }

    printf("sum of the numbers: %d\n", sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
