#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int a, int b, int *ptr1, int *ptr2);
void swapTemp(int *ptr1, int *ptr2);
void swapMath(int *ptr1, int *ptr2);
void swapMemCpy(void *ptr1, void *ptr2, int size);

int main(void)
{

    int a, b, *ptr1, *ptr2;
    void *vPointerA;
    void *vPointerB;
    printf("Enter two numbers to swap:");
    scanf("%d %d", &a, &b);

    ptr1 = &a;
    ptr2 = &b;
    vPointerA = &a;
    vPointerB = &b;

    printf("a: %d, b: %d <- Original Values\n", a, b);
    swap(a, b, ptr1, ptr2);
    printf("a: %d, b: %d <- Swapped without temp\n", a, b);
    swapTemp(ptr1, ptr2);
    printf("a: %d, b: %d <- Swapped with temp\n", a, b);
    swapMath(ptr1, ptr2);
    printf("a: %d, b: %d <- Swapped using maths (only works on int)\n", a, b);
    swapMemCpy(ptr1, ptr2, sizeof(int));
    printf("a: %d, b: %d <- Swapped using math (generic - type)\n", a, b);
}
void swap(int a, int b, int *ptr1, int *ptr2)
{
    *ptr1 = b;
    *ptr2 = a;
}
void swapTemp(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
void swapMath(int *ptr1, int *ptr2)
{

    *ptr1 = *ptr2 * *ptr1;
    *ptr2 = *ptr1 / *ptr2;
    *ptr1 = *ptr1 / *ptr2;
}
void swapMemCpy(void *ptr1, void *ptr2, int size)
{
    // size specifies the number of btyes
    void *tempMem = malloc(size);
    memcpy(tempMem, ptr1, size);
    memcpy(ptr1, ptr2, size);
    memcpy(ptr2, tempMem, size);
    free(tempMem);
}