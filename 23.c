#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
	float factor = 0.0, temp = 0.0;
	int *volume = (int *) malloc(n * sizeof(int));

	for(int i = 0; i < n; i++)
    {
        factor = tr[i].a + tr[i].b + tr[i].c;
        factor = factor/2;
        volume[i] = (factor * (factor - tr[i].a) * (factor - tr[i].b) * (factor - tr[i].c));
        volume[i] = sqrt(volume[i]);
    }

    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i < n-1; i++)
        {
            if(volume[i] > volume[i+1])
            {
                tr[i].a = (tr[i].a ^ tr[i+1].a);
                tr[i+1].a = (tr[i].a ^ tr[i+1].a);
                tr[i].a = (tr[i].a ^ tr[i+1].a);

                tr[i].b = (tr[i].b ^ tr[i+1].b);
                tr[i+1].b = (tr[i].b ^ tr[i+1].b);
                tr[i].b = (tr[i].b ^ tr[i+1].b);

                tr[i].c = (tr[i].c ^ tr[i+1].c);
                tr[i+1].c = (tr[i].c ^ tr[i+1].c);
                tr[i].c = (tr[i].c ^ tr[i+1].c);

                temp = volume[i];
                volume[i+1] = volume[i];
                volume[i] = temp;
            }
        }
    }
}

int main23()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
