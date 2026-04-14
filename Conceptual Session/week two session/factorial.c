#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int tc = 1; tc <= T; tc++)
    {
        int n;
        scanf("%d", &n);

       long long int fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        printf("%lld\n", fact);
        /* code */
    }
    
    return 0;
}