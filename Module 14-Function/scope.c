#include <stdio.h>

int sum( )
{
    int x = 20;
    printf("sum %d\n", x);
}
int main()
{
    int x= 10;
    printf("main %d\n", x);
    sum();

    return 0;
}