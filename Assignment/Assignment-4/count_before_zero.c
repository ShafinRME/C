#include <stdio.h>

int count_before_zero(int arr[], int n)
{
    int i = 0, count = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            break;
        }
        else
        {
            count++;
        }
    }

    return count;
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

    int countBeforZ = count_before_zero(arr, n);

    printf("%d", countBeforZ);
    return 0;
}