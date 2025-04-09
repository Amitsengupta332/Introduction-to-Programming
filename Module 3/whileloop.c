#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int i = 1; // Initialize i to 1
    while (i <= n)
    {
        sum = sum + i; // Add i to sum
        i++; // Increment i by 1
    }
    printf("%d\n", sum); // Print the final sum

    return 0;
}