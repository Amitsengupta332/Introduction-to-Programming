#include <stdio.h>
#include <stdbool.h>
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
   bool is_diagonal = true;
    if (r == c)
    {
        // square matrix
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    // printf("%d ", a[i][j]);
                    /* code */
                    // we are now at diagonal
                }
                else
                {
                    // we are now at outside diagonal

                    if (a[i][j] != 0)

                    {
                        is_diagonal = false;
                        printf("This Not a primary Diagonal matrix\n");
                        /* code */
                    }
                }
            }
        }
        //
        if (is_diagonal == true)
        {
            printf("This is a primary Diagonal matrix\n");
            /* code */
        }
    }
    else
    {
        printf("This Not a primary Diagonal matrix\n");
    }
    return 0;
}