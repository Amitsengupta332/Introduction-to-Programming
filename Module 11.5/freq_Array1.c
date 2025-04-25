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

    int cnt0 = 0, cnt1 = 0, cnt2=0, cnt3=0, cnt4=0, cnt5=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            cnt0++;
            /* code */
        }
        else if (a[i] == 1)
        {
            cnt1++;
            /* code */
        }
        else if (a[i] == 2)
        {
            cnt2++;
            /* code */
        }
        else if (a[i] == 3)
        {
            cnt3++;
            /* code */
        }
        else if (a[i] == 4)
        {
            cnt4++;
            /* code */
        }
        else if (a[i] == 5)
        {
            cnt5++;
            /* code */
        }

        /* code */
    }
    printf("%d\n", cnt0);
    printf("%d\n", cnt1);
    printf("%d\n", cnt3);
    printf("%d\n", cnt4);
    printf("%d\n", cnt5);

    return 0;
}