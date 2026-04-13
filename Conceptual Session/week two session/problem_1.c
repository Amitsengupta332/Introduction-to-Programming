#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        /* code */
        // printf("%d\n", i);

        if (i % 3 == 0 && i % 7 == 0)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\ncount: %d\n", count);

    return 0;
}