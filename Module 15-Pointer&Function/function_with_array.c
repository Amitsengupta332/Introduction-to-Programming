#include <stdio.h>
void fun(int a[], int n)
{
    // a[1] = 200;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    fun(a,n);
    // int a[5] = {10,20,30,40,50};
    // for(int i = 0; i < 5; i++)
    // {
    //     printf("%d ", a[i]);
    // }
    return 0;
}