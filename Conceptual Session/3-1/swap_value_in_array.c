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

    int q, firstIdx, secondIdx;
    scanf("%d", &q);

    for (i = 1; i <= q; i++)
    {
        scanf("%d %d", &firstIdx, &secondIdx);
        int temp = arr[firstIdx];
        arr[firstIdx] = arr[secondIdx];
        arr[secondIdx] = temp;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}