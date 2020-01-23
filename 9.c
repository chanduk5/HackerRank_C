
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main9() {

    char *str;
    int intCountArray[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, integerArray[10] = {0, 1,2 ,3, 4, 5, 6, 7, 8, 9}, i = 0, j = 0;

    str = malloc(1024 * sizeof(char));
    scanf("%[^\n]", str);
    str = realloc(str, strlen(str) + 1);

    for(i = 0; i < strlen(str); i++)
    {
        j = 0;
        for(j = 0; j < 10; j++)
        {
            if((int)(str[i] - 48) == integerArray[j])
            {
                intCountArray[j] += 1;
                break;
            }
        }
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%d ", intCountArray[i]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
