#include <stdio.h>

long long int summation(int arr[], int n, int i, long long int sum)
{
    if (i == n)
        return sum;
    sum = sum + arr[i];
    summation(arr, n, i + 1, sum);
}

int main()
{
    int i, n;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    long long int sum = summation(arr, n, 0, 0);

    printf("%lld", sum);
    return 0;
}