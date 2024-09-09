#include <stdio.h>
#include <string.h>

int main()
{
    char str[11], str1[11];

    scanf("%s %s", str, str1);

    int lenStr = strlen(str);
    int lenStr1 = strlen(str1);

    printf("%d %d\n", lenStr, lenStr1);
    printf("%s%s\n", str, str1);

    char temp[11];
    char temp2[11];
    temp[0] = str[0];
    temp2[0] = str1[0];
    str[0] = temp2[0];
    str1[0] = temp[0];

    printf("%s %s\n", str, str1);

    return 0;
}