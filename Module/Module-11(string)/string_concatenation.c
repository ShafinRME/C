#include <stdio.h>
#include <string.h>

int main()
{
    char str1[1001], str2[1001];
    scanf("%s %s", str1, str2);

    int len = strlen(str1);
    int i;

    for (i = 0; i <= strlen(str2); i++)
    {
        str1[len] = str2[i];
        len++;
    }

    printf("%s", str1);
    return 0;
}