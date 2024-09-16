#include <stdio.h>

void even_numbers(void)
{
    int i, n;
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    even_numbers();
    return 0;
}