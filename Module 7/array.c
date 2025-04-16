#include <stdio.h>
int main()
{
    int arr[5];
    // scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    // printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);

    // array print with the help of loop

    for(int i = 0; i <=4; i++)
    {
        scanf("%d", &arr[i]);
        // printf("a[%d]\n", i);
    } 
    for(int i = 0; i <=4; i++)
    {
        // scanf("%d", &arr[i]);
        printf("%d ", arr[i]);
    }
    // arr[2] = 10;
    // arr[3] = 20;
    // arr[1] = 50;
    // printf("%d\n", arr[2]);
    return 0;
}