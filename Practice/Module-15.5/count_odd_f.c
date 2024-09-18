#include <stdio.h>

int count_odd(int arr[], int n)
{
    int oddCount = 0, i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            oddCount++;
        }
    }

    return oddCount;
}

int main()
{
    int n, i;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int oddCount = count_odd(arr, n);

    printf("%d", oddCount);
    return 0;
}