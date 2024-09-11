#include <stdio.h>

int main()
{
    int n, i, val;
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &val);

    for (i = 0; i < n; i++)
    {
        if (val == arr[i])
        {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}