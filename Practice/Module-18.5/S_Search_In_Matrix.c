#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col, i, j;
    scanf("%d %d", &row, &col);

    int mat[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d ", &mat[i][j]);
        }
    }

    int number;
    scanf("%d", &number);
    int flag = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (mat[i][j] == number)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("will not take number\n");
    }
    else
    {
        printf("will take number\n");
    }

    return 0;
}