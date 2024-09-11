#include <stdio.h>

int main()
{
    int n, i, value, valCount = 0;
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &value);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            valCount++;
        }
    }

    printf("%d\n", valCount);
    return 0;
}