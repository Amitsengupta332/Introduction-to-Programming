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
    for (int i = n-1; i >= 0; i--)
    {

        if (i %2 == 1)
        {
            printf("%d ", arr[i]);
            /* code */
        }
        
        // printf("%d ", arr[i]);
        /* code */
    }

    return 0;
}