#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000)
    {
        printf("Cox's Bazar jabo \n");
        if (tk >= 10000)
        {
            printf("saint marting jabo \n");
        }
        else{
            printf("jabo na \n");
        }
    }
    else
    {
        printf("kothao jabo na  \n");
    }

    return 0;
}