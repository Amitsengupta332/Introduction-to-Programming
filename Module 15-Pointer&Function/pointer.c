#include <stdio.h>
int main()
{
    int x= 100;
    printf("%d\n", x);
    // printf("%p\n", &x);

    int* ptr;
    ptr = &x; // x er address rakhlam. 
    *ptr = 200; // dereference kore value change korlam.
    // printf("%p\n", ptr);
    // printf("%p\n", &ptr);
    printf("%d\n", *ptr);
    return 0;
}