#include <stdio.h>

int main()
{
    char s[50];
    // gets(s);
    fgets(s, 15,stdin);
    // scanf("%s", &s);
    printf("%s", s);
    return 0;
}