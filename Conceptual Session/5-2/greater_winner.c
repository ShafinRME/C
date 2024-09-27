#include <stdio.h>

int main()
{
    int gameNum, i, alis = 0, bidis = 0, a, b;

    scanf("%d ", &gameNum);

    for (i = 1; i <= gameNum; i++)
    {
        char alisha, bidisha;
        scanf(" %c %c", &alisha, &bidisha);
        a = alisha;
        b = bidisha;
        if (a > b)
        {
            alis++;
        }
        else if (a < b)
        {
            bidis++;
        }
    }

    if (alis > bidis)
    {
        printf("Alisha is winner\n");
    }
    else if (alis < bidis)
    {
        printf("Bidisha is winner\n");
    }
    else
    {
        printf("Both are winner\n");
    }
    return 0;
}