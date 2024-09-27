#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);

    float arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
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

    for (i = 0; i < n; i++)
    {
        printf("%0.1f ", arr[i]);
    }
    printf("\n");

    if (n % 2 != 0)
    {
        printf("%f", arr[n / 2]);
    }
    else
    {
        float avg = (arr[n / 2 - 1] + arr[n / 2]) / 2;
        printf("%f", avg);
    }

    return 0;
}