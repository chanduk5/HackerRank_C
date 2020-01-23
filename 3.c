#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//take two numbers of int data type, two numbers of float data type as input and output their sum

int main3()
{
    int integer1, integer2;
    float fnum1, fnum2;

    scanf("%d %d", &integer1, &integer2);
    scanf("%f %f", &fnum1, &fnum2);

    printf("%d %d\n", integer1+integer2, integer1-integer2);
    printf("%0.1f %0.1f\n", fnum1+fnum2, fnum1-fnum2);

    return 0;
}
