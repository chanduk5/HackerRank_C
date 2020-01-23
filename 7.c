#include <stdio.h>
#include <stdlib.h>

int main7()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */
    for(int index = 0; index < num/2; index++)
    {
       (*(arr+index)) = ((*(arr+index)) ^ (* (arr+(num - index - 1))));
       (*(arr+(num - index - 1))) = ((*(arr+index)) ^ ((*(arr+(num - index - 1)))));
       (*(arr+index)) = ((*(arr+index)) ^ ((*(arr+(num - index - 1)))));
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
