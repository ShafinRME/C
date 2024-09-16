#include <stdio.h>

int main()
{
    int i, j, k, n, s = 0;
    scanf("%d", &n);

    k = 2 * n - 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= s; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= k; j++)
        {
            printf("*");
        }

        k = k - 2;
        s++;
        printf("\n");
    }
    return 0;
}