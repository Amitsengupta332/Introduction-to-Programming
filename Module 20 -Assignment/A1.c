#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int x = a * b * c;
        if (x == 0)
        {
            if (m == 0)
                printf("0\n");
            else
                printf("-1\n");
        }
        else
        {
            if (m % x == 0)
                printf("%lld\n", m / x);
            else
                printf("-1\n");
        }
        /* code */
    }

    return 0;
}