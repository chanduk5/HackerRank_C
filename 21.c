#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  static int i = 3;
  static int res = 0;

  if(i < n)
  {
      res = a + b + c;
      i++;
      find_nth_term(n, res, b, c);
  }
  else
  {
      return res;
  }

  return res;
}

int main21() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}


