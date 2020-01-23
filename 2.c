#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//This challenge will help you to learn how to take a character, a string and a sentence as input in C

int main2()
{
    char ch, str1[100], str2[100];

    scanf("%c", &ch);
    printf("%c\n",ch);
    scanf("\n");

    fgets(str1, 100, stdin);
    printf("%s", str1);
    //scanf("\n");

    fgets(str2, 100, stdin);
    printf("%s", str2);


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
