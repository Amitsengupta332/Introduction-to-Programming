#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // upper part of the tree
    int tree_line = 6 + (n - 1) / 2;
    int tree_max_width = 2 * tree_line - 1;
    for (int i = 0; i < tree_line; i++)
    {
        int stars = 2 * i + 1;
        int spaces = (tree_max_width - stars) / 2;
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
            /* code */
        }

        for (int j = 0; j < stars; j++)
        {
            printf("*");
            /* code */
        }
        printf("\n");

        /* code */
    }

    // lower part of the tree
    for (int i = 0; i < 5; i++)
    { // 5 rows of line
        int spaces = (tree_max_width - n) / 2;
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        { // N stars in each row
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
