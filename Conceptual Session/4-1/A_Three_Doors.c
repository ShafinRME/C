#include <stdio.h>

int main()
{
    int i, n, keyH;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &keyH);
        int arr[3];
        for (int k = 0; k < 3; k++)
        {
            scanf("%d", &arr[k]);
        }

        if (arr[keyH - 1] == 0 || arr[arr[keyH - 1] - 1] == 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}