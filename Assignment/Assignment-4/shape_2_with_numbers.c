#include <stdio.h>

int main()
{
    int i, j, k, n;
    scanf("%d", &n);
    k = n - 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= k; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        k--;
        printf("\n");
    }
    return 0;
}