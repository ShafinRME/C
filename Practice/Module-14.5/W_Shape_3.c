#include <stdio.h>

int main()
{
    int i, j, k, s, n;
    scanf("%d", &n);

    k = 1;
    s = n - 1;

    for (i = 1; i <= 2 * n; i++)
    {
        for (j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= k; j++)
        {
            printf("*");
        }

        if (i < n)
        {
            s--;
            k = k + 2;
        }
        else if (i == n)
        {
            s = 0;
            k = 2 * n - 1;
        }
        else
        {
            s++;
            k = k - 2;
        }
        printf("\n");
    }
    return 0;
}