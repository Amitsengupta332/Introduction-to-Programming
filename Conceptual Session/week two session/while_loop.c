#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n !=0 )
    {
        printf("%d ", n);
        n=n/2;
        /* code */
    }
    printf("%d ", n);
    return 0;
}