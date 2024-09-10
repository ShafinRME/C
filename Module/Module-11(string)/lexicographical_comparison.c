#include <stdio.h>

int main()
{
    char str1[100], str2[100];

    scanf("%s %s", str1, str2);
    int i = 0;
    while (1)
    {
        if (str1[i] == '\0' && str2[i] == '\0')
        {
            printf("Same\n");
            break;
        }
        else if (str1[i] == '\0')
        {
            printf("First string is smaller\n");
            break;
        }
        else if (str2[i] == '\0')
        {
            printf("Second string is smaller\n");
            break;
        }
        if (str1[i] == str2[i])
        {
            i++;
        }
        else if (str1[i] > str2[i])
        {
            printf("Second string is smaller\n");
            break;
        }
        else
        {
            printf("First string is smaller\n");
            break;
        }
    }
    return 0;
}