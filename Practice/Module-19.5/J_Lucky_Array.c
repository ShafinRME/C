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

    int min = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
        }
    }

    int minCount = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == min)
        {
            minCount++;
        }
    }

    if (minCount % 2 == 0)
    {
        printf("Unlucky\n");
    }
    else
    {
        printf("Lucky\n");
    }

    return 0;
}