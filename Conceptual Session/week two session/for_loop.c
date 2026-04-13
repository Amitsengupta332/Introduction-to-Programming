#include <stdio.h>

int main()
{

    int n; 
    scanf("%d", &n);
    int i;

    // forword 
    for(i = n; i <= 5; i++)
    {
        printf("%d ", i);
    }

    // reverse
    printf("\nReverse:\n");
    for(i = n; i>=1; i--)
    {
        printf("%d ", i);
    }

    return 0;
}