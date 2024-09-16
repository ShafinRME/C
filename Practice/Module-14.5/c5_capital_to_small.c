#include <stdio.h>

char capital_to_small(char letter)
{
    char let = letter + 32;
    return let;
}

int main()
{
    char letter;
    scanf("%c", &letter);
    char let = capital_to_small(letter);

    printf("%c", let);
    return 0;
}