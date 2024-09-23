#include <stdio.h>
#include <string.h>

int strCount(char str[], int i)
{
    if (str[i] == '\0')
        return 0;
    int count = strCount(str, i + 1);
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    {
        return count + 1;
    }
    else
    {
        return count;
    }
}

int main()
{
    char str[201];
    fgets(str, 201, stdin);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    int count = strCount(str, 0);
    printf("%d", count);
    return 0;
}