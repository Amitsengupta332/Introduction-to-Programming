#include <stdio.h>

void m(int *p)
{
    int i = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
        /* code */
    }
    
}
int main()
{
    int a[5] = {6,5,3};
    return 0;
}