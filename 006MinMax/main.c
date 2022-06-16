#include <stdio.h>

void findMinMax(int num1, int num2, int *ptrA, int *ptrB);

int main(void)
{
    int num1, num2, max, min;

    num1 = 79;
    num2 = 9;
    findMinMax(num1, num2, &min, &max);
    printf("min: %d, max: %d\n", min, max);
}

void findMinMax(int num1, int num2, int *pMin, int *pMax)
{
    if (num1 > num2)
    {
        *pMin = num2;
        *pMax = num1;
    }
    else
    {
        *pMin = num1;
        *pMax = num2;
    }
}