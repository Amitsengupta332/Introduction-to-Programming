#include <stdio.h>
#include <string.h>
int main()
{
    char str[100001];
    scanf("%s", str);
    int len = strlen(str), con=0;

    for (int i = 0; i < len; i++)
    {
        //  char c = str[i];

        if (str[i]!= 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u'){
            con++;
        }
    }
    printf("%d\n", con);
    
    return 0;
}