#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    int i = 0;
    int j = strlen(str) - 1;
    int flag = 0;

    while (i < j)
    {
        if (str[i] == str[j])
        {
            flag = 0;
        }
        else
        {
            flag++;
            break;
        }
        i++;
        j--;
    }

    if (flag == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str[10];
    scanf("%s", str);

    int palin = is_palindrome(str);
    if (palin == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}