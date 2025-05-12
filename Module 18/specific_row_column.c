#include <stdio.h>
int main()
{
      int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // int specific_row;
    // scanf("%d", &specific_row);
    int specific_col;
    scanf("%d", &specific_col);
    for (int i = 0; i < r; i++)
    {
        printf("%d ", a[i][specific_col]);
        /* code */
    }
    

    return 0;
}