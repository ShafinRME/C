#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 10000)
    {
        printf("Gucci Bag\n");
        if (tk > 20000)
        {
            printf("Gucci Belt\n");
        }
    }
    else if (tk >= 5000)
    {
        printf("Levis Bag\n");
    }
    else
    {
        printf("Other things Buy from New Market\n");
    }
    return 0;
}