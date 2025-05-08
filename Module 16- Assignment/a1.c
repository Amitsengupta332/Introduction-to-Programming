#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }

        if (i % 2 == 1)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                printf("-");
            }
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }

        if (i % 2 == 1) {
            for (int j = 0; j < 2 * i - 1; j++) {
                printf("#");
            }
        } else {
            for (int j = 0; j < 2 * i - 1; j++) {
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}