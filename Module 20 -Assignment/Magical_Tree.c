// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int max_stars = 13;
    int total_leaf_rows = 7;
    int trunk_height = 5;
    int trunk_width = N;

    for (int i = 0; i < total_leaf_rows; i++)
    {
        int stars = 2 * i + 1;
        int spaces = (max_stars - stars) / 2;

        for (int s = 0; s < spaces; s++)
        {

            printf(" ");
        }
        for (int s = 0; s < stars; s++)
        {

            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < trunk_height; i++)
    {
        int spaces = (max_stars - trunk_width) / 2;

        for (int s = 0; s < spaces; s++)
            printf(" ");
        for (int s = 0; s < trunk_width; s++)
            printf("*");
        printf("\n");
    }

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int N;
//     scanf("%d", &N);

//     int i, j;
//     int top_height = N + 3;
//     int max_width = 2 * top_height - 1;

//     // Tree Top
//     for (i = 1; i <= top_height; i++)
//     {
//         int stars = 2 * i - 1;
//         int spaces = (max_width - stars) / 2;

//         for (j = 0; j < spaces; j++)
//             printf(" ");
//         for (j = 0; j < stars; j++)
//             printf("*");
//         printf("\n");
//     }

//     // Tree Trunk (always 5 lines of N stars, centered)
//     int trunk_lines = 5;
//     int trunk_width = N;
//     int trunk_spaces = (max_width - trunk_width) / 2;

//     for (i = 0; i < trunk_lines; i++)
//     {
//         for (j = 0; j < trunk_spaces; j++)
//             printf(" ");
//         for (j = 0; j < trunk_width; j++)
//             printf("*");
//         printf("\n");
//     }

//     return 0;
// }
