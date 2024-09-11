#include <stdio.h>
#include <string.h>

int main()
{
    int m, n, i;
    scanf("%d %d", &m, &n);

    int arr[m];
    int count[n + 1];
    for (int j = 1; j <= n; j++)
    {
        count[j] = 0;
    }

    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
        count[arr[i]]++;
    }

    for (int k = 1; k <= n; k++)
    {
        printf("%d\n", count[k]);
    }
    return 0;
}