#include <stdio.h>
#include <limits.h>

int maxArray(int arr[], int n, int i)
{
    if (i == n)
    {
        return INT_MIN;
    }
    int maximum = maxArray(arr, n, i + 1);
    if (arr[i] > maximum)
    {
        return arr[i];
    }
    else
    {
        return maximum;
    }
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

    int max = maxArray(arr, n, 0);
    printf("%d", max);
    return 0;
}