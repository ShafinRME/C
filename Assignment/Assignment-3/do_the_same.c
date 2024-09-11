#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}