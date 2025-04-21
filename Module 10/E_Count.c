#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000001];
    scanf("%s", s);
    // printf("%s", s);
    int length = strlen(s);
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        // sum += s[i]-48;
        sum += s[i]-'0';
        /* code */
    }
    printf("%d", sum);

    return 0;
}