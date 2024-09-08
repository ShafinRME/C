#include <stdio.h>

int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 5000)
    {
        printf("Cox's Bazar jabo\n");
        if (tk >= 10000)
        {
            printf("Saint Martin Jabo\n");
        }
        else
        {
            printf("Ferot chole ashbo bashay\n");
        }
    }
    else
    {
        printf("Kothao Jabo Na\n");
    }
    return 0;
}