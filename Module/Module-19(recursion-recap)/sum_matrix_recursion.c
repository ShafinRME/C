#include <stdio.h>
int mat1[1001][1001], mat2[1001][1001], mat3[1001][1001];
int row, col;
void sumMatrix(int r, int c)
{
    if (r == row)
    {
        return;
    }
    if (c == col)
    {
        sumMatrix(r + 1, 0);
        return;
    }
    mat3[r][c] = mat1[r][c] + mat2[r][c];
    sumMatrix(r, c + 1);
}
int main()
{
    int i, j;
    scanf("%d %d", &row, &col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    sumMatrix(0, 0);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}