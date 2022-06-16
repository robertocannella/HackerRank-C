#include <stdio.h>
void swap(int a, int b, int *ptr1, int *ptr2);
void swapTemp(int *ptr1, int *ptr2);
void swapMath(int *ptr1, int *ptr2);
int main(void)
{

    int a, b, *ptr1, *ptr2;
    printf("Enter two numbers to swap:");
    scanf("%d %d", &a, &b);

    ptr1 = &a;
    ptr2 = &b;

    printf("a: %d, b: %d\n", a, b);
    swap(a, b, ptr1, ptr2);
    printf("a: %d, b: %d\n", a, b);
    swapTemp(ptr1, ptr2);
    printf("a: %d, b: %d\n", a, b);
    swapMath(ptr1, ptr2);
    printf("a: %d, b: %d\n", a, b);
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
void swapMath(int *ptr1, int *ptr2){
    *ptr1 = *ptr2 * *ptr1;
    *ptr2 = *ptr1 / *ptr2;
    *ptr1 = *ptr1 / *ptr2;
}