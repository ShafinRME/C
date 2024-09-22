#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);

    int mat[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d ", &mat[i][j]);
        }
    }

    long long int mainDiaSum = 0, secondDiaSum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                mainDiaSum = mainDiaSum + mat[i][j];
            }
            if (i + j == n - 1)
            {
                secondDiaSum = secondDiaSum + mat[i][j];
            }
        }
    }

    long long int difference = mainDiaSum - secondDiaSum;
    if (difference < 0)
    {
        printf("%lld", difference * (-1));
    }
    else
    {
        printf("%lld", difference);
    }

    return 0;
}