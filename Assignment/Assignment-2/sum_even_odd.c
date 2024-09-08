#include <stdio.h>

int main()
{
    int n, i, sumev = 0, sumodd = 0;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            sumev += arr[i];
        }
        else
        {
            sumodd += arr[i];
        }
    }

    printf("%d %d\n", sumev, sumodd);
    return 0;
}