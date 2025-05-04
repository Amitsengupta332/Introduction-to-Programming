#include <stdio.h>

void sum(int a, int b)
{
    int answer = a + b;
    printf("%d  ", answer);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);

    return 0;
}