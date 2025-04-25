#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    for (int i = 0; i < t; i++)
    {
        char str[10001];
        fgets(str, sizeof(str), stdin);
        int upper = 0, lower = 0, digit = 0;
        for (int j = 0; str[j] != '\0'; j++)
        {
            if (str[j] >= 'A' && str[j] <= 'Z')
            {
                upper++;
            }
            else if (str[j] >= 'a' && str[j] <= 'z')
            {
                lower++;
            }
            else if (str[j] >= '0' && str[j] <= '9')
            {
                digit++;
            }
        }

        printf("%d %d %d\n", upper, lower, digit);
        /* code */
    }

    return 0;
}