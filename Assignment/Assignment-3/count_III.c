#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char str[1001];
    scanf("%s", str);

    int count[26] = {0};

    for (i = 0; i < strlen(str); i++)
    {
        count[str[i] - 'a']++;
    }

    for (i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 'a', count[i]);
    }
    return 0;
}