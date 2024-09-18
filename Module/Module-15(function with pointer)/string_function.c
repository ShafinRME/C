#include <stdio.h>

void reString(char str[])
{
    printf("%s", str);
}

int main()
{
    char str[20];
    scanf("%s", str);

    reString(str);

    return 0;
}