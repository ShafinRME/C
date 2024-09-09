#include <stdio.h>

int main()
{
    int i, n;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int q, pos, val;
    scanf("%d", &q);

    for (i = 1; i <= q; i++)
    {
        scanf("%d %d", &pos, &val);
        arr[pos] = arr[pos] + val;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}