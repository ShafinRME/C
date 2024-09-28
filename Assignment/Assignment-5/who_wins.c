#include <stdio.h>

int main()
{
    int test, i, tigerC = 0, pathanC = 0;
    scanf("%d", &test);

    for (i = 1; i <= test; i++)
    {
        int tiger, pathan;
        scanf("%d %d", &tiger, &pathan);
        if (tiger > pathan)
        {
            tigerC++;
        }
        else if (tiger < pathan)
        {
            pathanC++;
        }
    }

    if (tigerC > pathanC)
    {
        printf("Tiger\n");
    }
    else if (tigerC < pathanC)
    {
        printf("Pathan\n");
    }

    else
    {
        printf("Draw\n");
    }

    return 0;
}