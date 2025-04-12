#include <stdio.h>
int main()
{
     char ch;
     scanf("%c", &ch);
     if (ch >= '0' && ch <= '9')
     {
        /* code */
        printf("IS DIGIT");
     }
     else{
        printf("ALPHA\n");
        // nested if else
        if(ch >= 'a' && ch <= 'z'){
           printf("IS SMALL");
        }else{
            printf("IS CAPITAL");
        }
     }
     
    return 0;
}