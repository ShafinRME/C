#include <stdio.h>

int main()
{
    char letter;

    scanf("%c", &letter);

    if (letter >= "a" && letter <= "z")
    {
        int let = letter - 32;
        printf("%c", let);
    }
    else
    {
        int let = letter + 32;
        printf("%c", let);
    }
    return 0;
}