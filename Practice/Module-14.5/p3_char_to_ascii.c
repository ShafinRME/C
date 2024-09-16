#include <stdio.h>

int char_to_ascii(char letter)
{
    return letter;
}

int main()
{
    char letter;
    scanf("%c", &letter);

    char let = char_to_ascii(letter);
    printf("%d", let);
    return 0;
}