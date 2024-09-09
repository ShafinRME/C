#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001], str2[1001];
    scanf("%s", str);

    int i = strlen(str) - 1;
    int j = 0;
    int count = 0;

    while (j < i)
    {
        str2[j] = str[i];
        if (str[j] == str2[j])
        {
            count++;
        }
        j++;
        i--;
    }
    if (count == strlen(str) / 2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}