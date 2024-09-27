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

    for (i = 0; i < col; i++)
    {
        printf("%d ", mat[1][i]);
    }
    printf("\n");

    for (i = 0; i < row; i++)
    {
        printf("%d ", mat[i][2]);
    }
    return 0;
}