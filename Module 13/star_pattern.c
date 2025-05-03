#include <stdio.h>
int main()
{
    int n; //star=1
    scanf("%d", &n);
    int star=n;
    for (int i = 1; i <=n; i++) // for printing line
    {
        for (int j = 1; j <=star; j++) // for printing star
        {
            printf("*");
            /* code */
        }
        printf("\n");
        star--;
        // star++;
        
        // printf("kaj");
        /* code */
    }
    
    return 0;
}