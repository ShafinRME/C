#include <stdio.h>

int main()
{
    int i, n, s, j, k;

    scanf("%d", &n);
    s = n - 1;
    k = 1;
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
        printf("\n");
        s--;
        k++;
    }
    return 0;
}