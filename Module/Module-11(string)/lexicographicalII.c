#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];

    scanf("%s %s", str1, str2);

    int val = strcmp(str1, str2);
    if (val == 0)
    {
        printf("Same\n");
    }
    else if (val > 0)
    {
        printf("Second string is smaller\n");
    }
    else
    {
        printf("First string is smaller\n");
    }
    return 0;
}