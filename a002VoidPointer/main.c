#include <stdio.h>

int main(void){
    void *ptr;

    printf("%lu\n",sizeof(void*));
    int v = sizeof(ptr);
    for(int i = 0; i< v; i++){
        printf("%p\n", ptr++);
    }

    int a = 10;
    ptr = &a;
    printf("%lf",*(double*)ptr);
}

