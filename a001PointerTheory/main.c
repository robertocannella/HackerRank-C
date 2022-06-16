#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int a = 5; // <-- this variable hold the value 5
    int *p;    // <-- this is a pointer to any int type variable

    p = &a; // <-- here we assign p to hold the address of the a variable
    system("clear");
    printf("This will print the value the 'a' varable holds\n");
    printf("a: \t\t\t\t\t%d\n", a);
    printf("The address of 'a' \t\t\t%p\n", &a);
    printf("The value held inside  of 'p',\n which is a pointer to 'a': \t\t%p\n\n\n", p);
    printf("press enter for next page\n");
    getchar();
    system("clear");
    // DeReferencing:

    printf("a: %d <-- The value of 'a' accessed via variable name: 'a'\n", a);
    printf("a: %d <-- The value of 'a' accessed via dereferencing '*p'\n", *p);
    printf("press enter for next page\n");
    getchar();
    system("clear");

    printf("When initilizing pointers, it's best to initialize it to NULL if no other option is available\n\n");
    int *ptr1;
    char *ptr2 = NULL;

    printf("ptr1: %p <-- not initialized to 'NULL'\n", ptr1);
    printf("ptr1: %p <-- Initialized to 'NULL'\n", ptr2);

    printf("\npress enter for next page\n");
    getchar();
    system("clear");

    // changing values by dereferencing:

    printf("We can use pointers to change values of variables by address:\n");
    int b;
    int *pb = NULL;
    pb = &b;

    *pb = 11;
    printf("%d <-- changed by pointer dereferencing", b);

    printf("\n\n\npress enter for next page\n");
    getchar();
    system("clear");

    printf("Some more examples of pointer use:\n\n");
    int num1 = 5, num2 = 7;
    int *ptrA = NULL, *ptrB = NULL;

    printf("num1: %d, num2: %d\n", num1, num2);

    ptrA = &num1;
    ptrB = &num2;

    printf("num1: %d, num2: %d\n", num1, num2);

    *ptrA = *ptrA + 1;
    *ptrB = *ptrB + 3;

    printf("num1: %d, num2: %d\n", num1, num2);

    ptrA = ptrB;
    ptrB = ptrA;

    printf("num1: %d, num2: %d\n", num1, num2);
    printf("ptrA: %d, ptrB: %d\n", *ptrA, *ptrB);

    num1 = *ptrB;
    num2 = num1 - 3;

    printf("num1: %d, num2: %d\n", num1, num2);

    printf("\n\n\npress enter for next page\n");
    getchar();
    system("clear");
    return 0;
}