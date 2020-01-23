#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d);

int max_of_four(int a, int b, int c, int d)
{
    return ((a > b)? ((a > c)? ((a > d)? a : d) : ((c > d)? c: d)): ((b > c)? ((b > d)? b : d) : ((c > d)? c: d)));
}

int main4() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
