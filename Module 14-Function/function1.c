#include <stdio.h>

// int sub(int a, int b)
// {
//     int answer = a - b;
//     return answer;
// }
int sum(int a, int b)
{
    int answer = a + b;
    return answer;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int val = sum(a, b);
    // int val1 = sum(10, 5);
    // int val2 = sub(10, 5);
    printf("%d  ", val);

    return 0;
}