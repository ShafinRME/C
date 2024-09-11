#include <stdio.h>

int main()
{
    int n, i, countEven = 0, countOdd = 0;

    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }

    printf("%d %d\n", countEven, countOdd);
    return 0;
}