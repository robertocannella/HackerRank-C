#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// Complete the following function.

void calculate_the_maximum(int n, int k)
{
    int maxAnd = 0;
    int maxOr = 0;
    int maxXOr = 0;

    for (int j = n; j > 0; j--)
    {
        for (int i = 1; i < j; i++)
        {
            maxAnd = (((i&j) > maxAnd) && ((i&j) < k)) ? (i&j) : maxAnd;
            printf(" %d & %d: = %d\t", i, j, i & j);

            maxOr = (((i|j) > maxOr) && ((i|j) < k)) ? (i|j) : maxOr;
            printf(" %d | %d: = %d\t", i, j, i | j);

            maxXOr = (((i^j) > maxXOr) && ((i^j) < k)) ? (i^j) : maxOr;
            printf(" %d ^ %d: = %d\n", i, j, i ^ j);
        }

    }
        printf("%d\n", maxAnd);
        printf("%d\n", maxOr);
        printf("%d\n", maxXOr);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
