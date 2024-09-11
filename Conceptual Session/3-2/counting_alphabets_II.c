#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    scanf("%s", str);
    int countC = 0, countS = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            countS++;
        }
        else
        {
            countC++;
        }
    }

    printf("Small : %d\nCapital : %d\n", countS, countC);
    return 0;
}