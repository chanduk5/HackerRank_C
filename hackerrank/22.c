#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#if 0
int next_permutation(int n, char **s)
{
	/**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/

	static char **str;
	str = s;

	for(int i = 0; i < 2n-1; i ++)
    {
        for(int j = 0; j < n; j++)
        {
            for(k = 0; k < n-1)
            printf("%s%c", str[i], i == n - 1 ? '\n' : ' ');
        }
    }


}

int main22()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
#endif
