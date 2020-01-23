#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//This challenge requires you to print "Hello, World" on a single line, and then print the already provided input string to stdout.

int main1()
{

    char s[100];
    scanf("%[^\n]%*c", &s);

    printf("Hello, World!\n");

    for(int index = 0; s[index] != '\0'; index++)
    {
        printf("%c", s[index]);
    }

    printf("\n");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
