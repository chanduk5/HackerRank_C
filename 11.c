#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main11()
{
    int a, b;
    char str[15][15] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    scanf("%d\n%d", &a, &b);
  	// Complete the code.

  	for(int index = a; index <= b; index++)
    {
        if((index > 0) && (index <= 9))
        {
            printf("%s\n", str[index-1]);
        }
        else
        {
            if((index%2) == 0)
            {
                printf("%s\n", str[9]);
            }
            else
            {
                printf("%s\n", str[10]);
            }
        }
    }

    return 0;
}

