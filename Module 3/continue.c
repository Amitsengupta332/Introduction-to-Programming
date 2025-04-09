#include <stdio.h>

int main() 
{
    for(int i=1; i<=10; i++)
    {
        if (i == 5) {
            continue;// exit the loop when i is 5
        }
        printf("%d\n", i);
    }
    return 0;
}