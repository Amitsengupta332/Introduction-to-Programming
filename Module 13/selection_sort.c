#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
     

    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // printf("%d %d\n", a[i], a[j]);
            // if (a[i]<a[j])
            // {
            //  // serial ok
            // }else
            if(a[i]> a[j])
            {
                // not serial ok
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
        /* code */
    }
    
   

    return 0;
}