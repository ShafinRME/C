#include <stdio.h>

void reversedEvenArray(int arr[], int n)
{
    if (n < 0)
        return;
    if (n % 2 == 0)
    {
        printf("%d ", arr[n]);
    }
    reversedEvenArray(arr, n - 1);
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

    reversedEvenArray(arr, n - 1);
    return 0;
}