#include <stdio.h>

int main()
{
    int test, i, width, height;

    scanf("%d", &test);

    for (i = 1; i <= test; i++)
    {
        scanf("%d %d", &height, &width);

        if (height == width)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }
    return 0;
}