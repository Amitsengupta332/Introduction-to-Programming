#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    // 1 to N
    // for (int i = 1; i <= N; i++)
    // {
    //     printf("%d\n", i);
    // }

    // N to 1
    for(int i = N; i >=1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}