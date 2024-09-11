#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    scanf("%s", str);

    int i, CCount = 0, SCount = 0;

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            CCount++;
        }
        else
        {
            SCount++;
        }
    }

    printf("%d %d", CCount, SCount);
    return 0;
}