#include <stdio.h>
int main()
{
    int i = -3;
    while (i <=5)
    {
        for(int j = 0; j<5; j++){
            printf("#");
        }
        i--;
    }
    return 0;
}