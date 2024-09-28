#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    int i, smCount = 0, cpCount = 0, spCount = 0;

    fgets(str, 1001, stdin);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            smCount++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            cpCount++;
        }
        else if (str[i] == ' ')
        {
            spCount++;
        }
    }

    printf("Capital - %d\nSmall - %d\nSpaces - %d\n", cpCount, smCount, spCount);
    return 0;
}