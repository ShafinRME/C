#include <stdio.h>

int main()
{
    int row, col, i, j;
    scanf("%d %d", &row, &col);

    int mat[row][col];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    if (row == col)
    {
        int flag = 1;
        // Primary Diagonal Check
        // for (i = 0; i < row; i++)
        // {
        //     for (j = 0; j < col; j++)
        //     {
        //         if (i == j)
        //         {
        //             continue;
        //         }
        //         else
        //         {
        //             if (mat[i][j] != 0)
        //             {
        //                 flag = 0;
        //             }
        //         }
        //     }
        // }
        // if (flag == 1)
        // {
        //     printf("Matrix is Primary Diagonal\n");
        // }
        // else
        // {
        //     printf("Matrix is non diagonal\n");
        // }

        // Secondary Diagonal check
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (i + j == row - 1)
                {
                    continue;
                }
                else
                {
                    if (mat[i][j] != 0)
                    {
                        flag = 0;
                    }
                }
            }
        }
        if (flag == 1)
        {
            printf("Matrix is Secondary Diagonal\n");
        }
        else
        {
            printf("Matrix is non diagonal\n");
        }
    }
    else
    {
        printf("It is not a square matrix\n");
    }

    return 0;
}