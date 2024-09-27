#include <stdio.h>

int main()
{
    int n, i, even = 0, odd = 0, t_f = 0;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else if (arr[i] % 2 != 0)
        {
            odd++;
        }
        if (arr[i] % 15 == 0)
        {
            t_f++;
        }
    }

    printf("EVEN - %d\nODD - %d\nT_F - %d\n", even, odd, t_f);
    return 0;
}