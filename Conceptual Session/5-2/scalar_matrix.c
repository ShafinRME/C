#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    int mat[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    int flag = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (mat[i][j] == mat[0][0])
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
                if (mat[i][j] == 0)
                {
                    continue;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    if (flag == 1)
    {
        printf("Yes Scalar\n");
    }
    else
    {
        printf("No It is not scalar\n");
    }
    return 0;
}