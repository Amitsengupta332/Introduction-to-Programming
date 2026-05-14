#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &arr[i]);
    }

    int max_value = arr[0];

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] > max_value)
        {
            /* code */
            max_value = arr[i];
        }
    }

    printf("%d", max_value);

    return 0;
}