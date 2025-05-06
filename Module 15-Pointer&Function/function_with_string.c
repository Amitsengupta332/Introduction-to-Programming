#include <stdio.h>
void fun(char s[])
{
    // a[1] = 200;
    printf("%s\n", s);
    // printf("%d\n", strlen(5));
}
int main()
{

    char s[20];
    scanf("%s", &s);
    fun(s);

    return 0;
}