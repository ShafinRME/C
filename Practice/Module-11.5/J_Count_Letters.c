#include <stdio.h>
#include <string.h>

int main()
{
    char str;

    int count[26] = {0};

    while (scanf("%c", &str) != EOF)
    {
        count[str - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }
    return 0;
}