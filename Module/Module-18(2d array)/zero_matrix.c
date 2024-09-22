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

    int flag = 1;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (mat[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 0)
    {
        printf("Non Zero Matrix\n");
    }
    else
    {
        printf("Zero Matrix\n");
    }
    return 0;
}