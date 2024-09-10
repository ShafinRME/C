#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int arr[n];
    int count[10] = {0};

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        int val = arr[i];
        count[val]++;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d - %d\n", i, count[i]);
    }

    return 0;
}