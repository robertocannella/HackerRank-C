#include <stdio.h>
void swap(int a, int b, int* ptr1, int* ptr2);
int main (void){

    int a, b, *ptr1, *ptr2;
    a = 33;
    b = 22;
    ptr1 = &a;
    ptr2 = &b;

    printf("a: %d, b: %d\n", a, b);
    swap(a, b, ptr1 ,ptr2);
    printf("a: %d, b: %d\n", a, b);

}
void swap(int a, int b, int* ptr1, int* ptr2){
    *ptr1= b;
    *ptr2= a;
}