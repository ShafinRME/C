#include <stdio.h>

int arrayF(int arr[], int n)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[6] = {3, 2, 5, 7, 12, 67};

    arrayF(arr, 6);

    return 0;
}