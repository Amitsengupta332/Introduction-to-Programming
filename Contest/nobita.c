#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        /* code */
    }
    // sort the array
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1 ; j++)
        {
             if (a[j] > a[j + 1]) {
                // Swap
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
 
    }

    int left = 0, right = n-1, shots = 0;
    while (left < right)
    {
        if (a[left] + a[right] <= k)
        {
            shots++;
            left++;
            right--;
            
        }else{
            right--;
        }
        
        /* code */
    }
    
    printf("%d\n", shots);
    return 0;
}