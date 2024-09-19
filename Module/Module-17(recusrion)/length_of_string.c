#include <stdio.h>

int lengthOfString(char str[], int i)
{
    if (str[i] == '\0')
        return 0;

    int count = lengthOfString(str, i + 1);
    return count + 1;
}

int main()
{
    char str[1001];
    scanf("%s", str);

    int length = lengthOfString(str, 0);
    printf("%d", length);
    return 0;
}