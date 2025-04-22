#include <stdio.h>
// #include <stdbool.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int i = 0;
     
    while (1)
    {
        /* code */
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Equal\n");
            break;
            /* code */
        }else if (a[i] == '\0')
        {
            printf("a is shorter\n");
            break;
            /* code */
        }
        else if (b[i] == '\0')
        {
            printf("b is shorter\n");
            break;
            /* code */
        }

        else if (a[i] < b[i])
        {
            printf("a is smaller\n");
            break;
            /* code */
        }
        else if (a[i] > b[i])
        {
            printf("b is smaller\n");
            break;
            /* code */
        }
        else if (a[i] == b[i])
        {
            i++;
            /* code */
        }
        
        
        
        
        
    }
    
    return 0;
}