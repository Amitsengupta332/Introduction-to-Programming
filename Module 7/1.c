#include <stdio.h>
int main()
{
    int arrayName[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += arrayName[i];
    }
    printf("%d", sum);

    return 0;
}