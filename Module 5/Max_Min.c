#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c){
        printf("%d", a);
    }else if (b>a && b>c)
    {
        printf("%d", b);
        /* code */
    }
    else if (c>a && c> b)
    {
        printf("%d", c);
        /* code */
    }
    
    

    return 0;
}