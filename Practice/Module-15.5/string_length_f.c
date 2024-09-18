#include <stdio.h>

int my_len(char str[])
{
    int count = 0, i = 0;
    while (str[i] != '\0')
    {
        count++;
        i++;
    }

    return count;
}

int main()
{
    char str[10001];
    scanf("%s", str);

    int lengthStr = my_len(str);
    printf("%d", lengthStr);
    return 0;
}