#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int MAX(int a, int b);

int main(void)
{

    int n;
    // scanf("%d", &n);
    n = 9;

    for (int i = -n + 1; i < n; i++)
    {
        for (int j = -n + 1; j < n; j++)
        {
            printf("%d ", MAX(abs(i), abs(j)) + 1);
            fflush(stdout);
        }
        printf("\n");
        fflush(stdout);
    }
    return 0;
}
int MAX(int a, int b)
{
    return (a > b) ? a : b;
}
