#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int v;

    int pos_sum = 0, neg_sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v);
        if (v > 0)
        {
            pos_sum = pos_sum + v;
            /* code */
        }
        else if (v < 0)
        {
            neg_sum = neg_sum + v;
            /* code */
        }
    }
    printf("%d %d", pos_sum, neg_sum);

    return 0;
}