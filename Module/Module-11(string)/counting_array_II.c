#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    scanf("%s", str);
    int i;

    int count[26] = {0};

    for (i = 0; i < strlen(str); i++)
    {
        int val = str[i] - 'a';
        count[val]++;
    }

    for (i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 'a', count[i]);
    }

    return 0;
}