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

    for (i = 0; i < row; i++)
    {
        for (j = col - 1; j >= 0; j--)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}