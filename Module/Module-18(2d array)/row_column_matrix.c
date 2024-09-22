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
    // Specific Row Showing
    int sRow;
    scanf("%d", &sRow);
    for (i = 0; i < col; i++)
    {
        printf("%d ", mat[sRow - 1][i]);
    }
    printf("\n\n");

    // Specific column showing
    int sCol;
    scanf("%d", &sCol);
    for (i = 0; i < row; i++)
    {
        printf("%d\n", mat[i][sCol - 1]);
    }

    return 0;
}