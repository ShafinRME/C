#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    int n, i, strLength;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", str);
        strLength = strlen(str);
        if (strLength <= 10)
        {
            printf("%s\n", str);
        }
        else
        {
            printf("%c%d%c\n", str[0], strlen(str) - 2, str[strlen(str) - 1]);
        }
    }

    return 0;
}