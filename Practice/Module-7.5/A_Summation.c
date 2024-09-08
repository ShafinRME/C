#include <stdio.h>

int main()
{
    long long int sum = 0, n, i;
    scanf("%lld", &n);
    long long int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        sum = sum + arr[i];
    }
    if (sum < 0)
    {
        sum = sum * -1;
        printf("%lld", sum);
    }
    else
    {
        printf("%lld", sum);
    }
    return 0;
}
