#include <stdio.h>

int main()
{
    char letter;
    scanf("%c", &letter);
    if (letter >= 'a' && letter <= 'y')
    {
        letter = letter + 1;
        printf("%c\n", letter);
    }
    else if (letter == 'z')
    {
        printf("a\n");
    }
    return 0;
}