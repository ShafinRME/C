#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num == 0)
    {
        printf("%d - Zero\n", num);
    }
    else if (num > 0)
    {
        printf("%d - Positive\n", num);
    }
    else
    {
        printf("%d - Negative\n", num);
    }
    return 0;
}