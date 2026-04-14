#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    // 1 to N
    for (int i = 1; i <= N; i++)
    {
        printf("%d\n", i);
    }

    // Task1:  N to 1
    for (int i = N; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    // Task2 : Print Even number
    for (int i = 0; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    // Task3: 1 to N sum

    int sum = 0;

    for (int i = 1; i <= N; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}