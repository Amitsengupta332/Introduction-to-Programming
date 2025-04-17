#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int x,v;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        /* code */
    }
    scanf("%d %d", &x, &v);
    arr[x] = v;
    for (int i = n-1; i >=0 ; i--)
    {
        printf("%d ", arr[i]);
        /* code */
    }   
    return 0;
}