#include <stdio.h>

int main() 
{
    for(int i=1; i<=10; i++)
    {
        printf("%d\n", i);
        if (i == 5) {
            break; // exit the loop when i is 5
        }
    }
    return 0;
}