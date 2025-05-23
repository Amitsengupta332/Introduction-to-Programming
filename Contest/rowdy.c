#include <stdio.h>

int main()
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int maxOnes = -1, resultRow = 0;

    for (int i = 0; i < rows; i++)
    {
        int onesCount = 0;
        for (int j = 0; i < cols; j++)
        {
            if (matrix[i][j] == 1)
            {
                onesCount = cols - j; // Number of 1s = total columns - first 1's position
                break;
            }
        }
        if (onesCount > maxOnes)
        {
            maxOnes = onesCount;
            resultRow = i;
        }

        /* code */
    }
    printf("%d\n", resultRow);
    return 0;
}