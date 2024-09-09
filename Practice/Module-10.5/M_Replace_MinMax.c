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

    int min = arr[0], max = arr[0], maxIdx, minIdx;
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
            maxIdx = i;
        }
        if (arr[i] <= min)
        {
            min = arr[i];
            minIdx = i;
        }
    }

    int temp = arr[maxIdx];
    arr[maxIdx] = arr[minIdx];
    arr[minIdx] = temp;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}