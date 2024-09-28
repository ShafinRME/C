#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    if (n % 2 != 0)
    {
        printf("%d", arr[n / 2]);
    }
    else
    {
        printf("%d %d", arr[n / 2 - 1], arr[n / 2]);
    }

    return 0;
}