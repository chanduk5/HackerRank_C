#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strcpy1( char * dest, const char *source)
{
    int i = 0;
    while (1)
    {
        dest[i] = source[i];

        if (dest[i] == '\0')
        {
            break;
        }

        i++;
    }
}

void swap(const char *a, const char *b)
{
    char *temp;

    strcpy1(temp, a);
    strcpy1(a, b);
    strcpy1(b, temp);

   // free(temp);
}

int ditrictCharacterCount(const char *arr)
{
    int dist = 0;

    while (*arr != '\0') {
        if (!strchr(arr + 1, *arr))
            dist++;
        arr++;
    }
    return dist;
}

int lexicographic_sort(const char* a, const char* b)
{

    if(strcmp(a, b) > 0)
    {
        swap(a, b);
    }

    return 0;
}

int lexicographic_sort_reverse(const char* a, const char* b)
{
    if(strcmp(a, b) < 0)
    {
        swap(a, b);
    }

    return 0;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b)
{
    int count1 = ditrictCharacterCount(a);
    int count2 = ditrictCharacterCount(b);

    if(count1 > count2)
    {
        swap(a, b);
    }
    else if(count1 == count2)
    {
        lexicographic_sort(a, b);
    }

    return 0;
}

int sort_by_length(const char* a, const char* b)
{
    if(strlen(a) > strlen(b))
    {
        swap(a, b);
    }
    else if(strlen(a) == strlen(b))
    {
        if(strcmp(a, b) > 0)
        {
            swap(a, b);
        }
    }
    else
    {
        /* No Action */
    }

    return 0;
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b))
{
        for(int row = 0; row < len - 1; row++)
        {
            for(int coloum = row+1; coloum < len; coloum++)
            {
                cmp_func(arr[row], arr[coloum]);
            }

        }
}


