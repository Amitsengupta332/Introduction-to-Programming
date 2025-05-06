#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    *(a + 1) = 100;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
        /* code */
    }

    // printf("Array zero index er address %p\n", &a[0]);
    // printf("Array er name %d\n", *a);

    // printf("%p\n", &a[1]);
    // printf("%p\n", &a[2]);
    // printf("%p\n", &a[3]);
    // printf("%p\n", &a[4]);
    return 0;
}