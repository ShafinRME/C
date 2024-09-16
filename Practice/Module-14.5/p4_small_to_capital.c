#include <stdio.h>

char small_to_capital(char letter)
{
    char let = letter - 32;
    return let;
}

int main()
{
    char letter;
    scanf("%c", &letter);
    char let = small_to_capital(letter);

    printf("%c", let);
    return 0;
}