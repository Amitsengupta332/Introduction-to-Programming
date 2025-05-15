#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int n;

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int a[n], b[n], c[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (b[j] > b[j + 1])
                {
                    int temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            c[i] = abs(a[i] - b[i]);
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }
        printf("\n");

        /* code */
    }

    return 0;
}