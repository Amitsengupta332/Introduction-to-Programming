#include <stdio.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
        /* code */
    }
    printf("%d", count);

    return 0;
}