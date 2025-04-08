#include <stdio.h>

int main()

{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // printf("I am sorry \n"); 
        printf("%d\n", i);
    }
    return 0;
}

// #include<stdio.h>

// int main() 
// {
//     int n;
//     scanf("%d", &n);
//     for(int i =1; i<=n ; i++)
//     {
//         printf("%d\n", i);
//     }
//     return 0;
// }