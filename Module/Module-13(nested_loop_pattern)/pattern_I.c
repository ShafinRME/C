#include <stdio.h>

int main()
{
    int i, n;

    scanf("%d", &n);
    int k = n, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= k; j++)
        {
            printf("* ");
        }
        printf("\n");
        k--;
    }
    return 0;
}