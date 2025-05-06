#include <stdio.h>
int main()
{
    int x= 10;
    printf("%d\n", x);
    printf("%p\n", &x);

    int* ptr;
    ptr = &x; // x er address rakhlam. 
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    return 0;
}