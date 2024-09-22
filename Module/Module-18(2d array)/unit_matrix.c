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
        // Unit Matrix Check
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (i == j)
                {
                    if (mat[i][j] == 1)
                    {
                        continue;
                    }
                    else
                    {
                        flag = 0;
                        break;
                    }
                }
                else
                {
                    if (mat[i][j] != 0)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
        }
        if (flag == 1)
        {
            printf("Matrix is Unit Matrix\n");
        }
        else
        {
            printf("Matrix is not Unit\n");
        }
    }
    else
    {
        printf("It is not a square matrix\n");
    }

    return 0;
}