#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n-1 ;
    for (int i = 1; i <=n; i++) // for printing line
    {
        for (int j =1; j<=space ; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++) // for printing star
        {
            printf("*");
            /* code */
        }
        printf("\n");
        star +=2;
        space--;
        
        // printf("kaj");
    }
    return 0;
}