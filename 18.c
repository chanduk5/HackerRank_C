
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#if 0
int next_permutation(int n, char **s)
{
    static int first_timeflag = 1;
    int matchcount = 0;
    static int perm_count = 0;
	/**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/

	if(first_timeflag == 1)
    {
        for(int i = 1; i < n; i++)
        {
            if((strcmp(s[0], s[i]) == 0)
            {
                 matchcount++;
            }
        }

        if(matchcount != 0)
        {
            perm_count = (((n - matchcount) * (n - matchcount -1)) + 1);
        }
        else
        {
            perm_count = (n * (n - 1));
        }

        first_timeflag = 0;
    }

    for(static int i = 0; i < perm_count; i++)
    {

    }


}

int main()
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
