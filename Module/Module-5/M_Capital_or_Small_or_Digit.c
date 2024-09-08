#include <stdio.h>

int main()
{
    char letter;
    scanf("%c", &letter);

    if (letter >= '0' && letter <= '9')
    {
        printf("IS DIGIT\n");
    }

    else if (letter >= 'A' && letter <= 'Z')
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else
    {
        printf("ALPHA\nIS SMALL\n");
    }
    return 0;
}