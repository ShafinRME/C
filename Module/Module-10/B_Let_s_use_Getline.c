#include <stdio.h>
#include <string.h>

int main()
{
    char str[100001];
    fgets(str, 100001, stdin);

    int i = 0;
    while (str[i] != '\\')
    {
        printf("%c", str[i]);
        i++;
    }
    return 0;
}