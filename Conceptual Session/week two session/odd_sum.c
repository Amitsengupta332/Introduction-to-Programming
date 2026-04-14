#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++)
    {
        /* code */
        int X, Y;
        scanf("%d %d", &X, &Y);
        int sum = 0;

        if (X > Y)
        {
            int temp = X;
            X = Y;
            Y = temp;
        }

        for (int i = X + 1; i < Y; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}