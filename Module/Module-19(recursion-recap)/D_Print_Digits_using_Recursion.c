#include <stdio.h>

void digit(int n)
{
    if (n == 0)
        return;
    int rem = n % 10;
    digit(n / 10);
    printf("%d ", rem);
}

int main()
{
    int n, num;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        digit(num);
        if (num == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("\n");
        }
    }

    return 0;
}