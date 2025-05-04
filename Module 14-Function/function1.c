#include <stdio.h>

int sum(int a, int b)
{
    int answer = a + b;
    return answer;
}
int main()
{
    int val = sum(10, 5);
    printf("%d", val);

    return 0;
}