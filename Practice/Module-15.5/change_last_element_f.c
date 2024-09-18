#include <stdio.h>
void change_it(int arr[], int n)
{
    arr[n - 1] = 100;
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

    change_it(arr, n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}