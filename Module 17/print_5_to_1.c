#include <stdio.h>
void hello(int i)
{
    if (i == 0)
    {
        return;
    }
    printf("%d\n", i);
    hello(i - 1);
}
int main()
{

    hello(5);
    return 0;
}