#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main8() {

    char *s, temp_str[1024];
    int index = 0, baseIndex = 0;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    while(index < (strlen(s)+1))
    {
        baseIndex = index;

        while((s[index] != ' ') && (s[index] != '\0'))
        {
            temp_str[index-baseIndex] = s[index];
            index++;
        }

        temp_str[index-baseIndex] = '\0';
        printf("%s\n", temp_str);
        index++;
    }

    return 0;
}
