#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if 0
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
#endif

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
        return 1;
    }

    return 0;
}

int lexicographic_sort_reverse(const char* a, const char* b)
{
    if(strcmp(a, b) < 0)
    {
        return 1;
    }

    return 0;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b)
{
    int count1 = ditrictCharacterCount(a);
    int count2 = ditrictCharacterCount(b);

    if(count1 > count2)
    {
        return 1;
    }
    else if(count1 == count2)
    {
        return lexicographic_sort(a, b);
    }

    return 0;
}

int sort_by_length(const char* a, const char* b)
{
    if(strlen(a) > strlen(b))
    {
        return 1;
    }
    else if(strlen(a) == strlen(b))
    {
        return lexicographic_sort(a, b);
    }
    else
    {
        /* No Action */
    }

    return 0;
}

void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b))
{
        char * temp;
        for(int row = 0; row < len; row++)
        {
            for(int coloum = 0; coloum < len - 1; coloum++)
            {
                if(cmp_func(arr[coloum], arr[coloum+1]))
                {
                    temp = (char *)arr[coloum];
                    arr[coloum] = arr[coloum+1];
                    arr[coloum+1] = (char *)temp;
                }
            }
        }
}


int main15()
{
    int n;
    scanf("%d", &n);

    char** arr;
	arr = (char**)malloc(n * sizeof(char*));

    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }

    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    return 0;
}
