#include <stdio.h>

void print_n(int n)
{
    int i;
    if (n >= 0)
    {
        for (i = n; i >= -n; i--)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (i = n; i <= (-1 * n); i++)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    print_n(n);

    return 0;
}