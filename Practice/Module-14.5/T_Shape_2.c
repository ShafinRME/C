#include <stdio.h>

int main()
{
    int i, j, k, n, s;
    scanf("%d", &n);

    k = 1;
    s = n - 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= k; j++)
        {
            printf("*");
        }

        k = k + 2;
        s--;
        printf("\n");
    }
    return 0;
}