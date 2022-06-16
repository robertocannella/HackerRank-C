#include <stdio.h>
#include <stdint.h>
#define MAX_SIZE 8
int main(void)
{
    int grades[MAX_SIZE] = {80, 90, 100, 56, 78, 76, 34, 45};

    printf("The grades array starts at address: %p\n", &grades);
    printf("The item at index 2 of the array starts at address: %p\n", grades + 1);
    printf("The item at index 1 of the array starts at address: %p\n", &grades[2]);

    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("%p\n", &grades[i]);
    }
    int *ptr = grades;

    printf("size of int: %lu bytes \n", sizeof(int));
    printf("number of itmes: %d\n", MAX_SIZE);
    printf("size of array ( sizeof(int) * MAX_SIZE ): %lu bytes\n", sizeof(int) * MAX_SIZE);

    printf("Size of uint8_t: \t%lu byte\n", sizeof(uint8_t));
    printf("Size of uint16_t: \t%lu bytes\n", sizeof(uint16_t));
    printf("Size of uint32_t: \t%lu bytes\n\n", sizeof(uint32_t));

    printf("Size of char: \t\t%lu bytes\n", sizeof(char));
    printf("Size of short: \t\t%lu bytes\n", sizeof(short));
    printf("Size of int: \t\t%lu bytes\n", sizeof(int));
    printf("Size of float: \t\t%lu bytes\n", sizeof(float));
    printf("Size of double: \t%lu bytes\n", sizeof(double));
}