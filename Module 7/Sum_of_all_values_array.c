#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        /* code */
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum = sum + arr[i];
        //    printf("%d ", arr[i]);
        /* code */
    }
    printf("%d", sum);

    return 0;
}