// Write a c program to print all odd number from 100 to 1
#include <stdio.h>

int main()
{
    for (int i = 100; i >= 1; i--)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);  // Print the current value of i
        }
        /* code */
    }

    return 0;
}