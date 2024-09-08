#include <stdio.h>

int main()
{
    int num, first, second;

    scanf("%d", &num);

    first = num / 10;
    second = num % 10;

    if (second == 0)
    {
        printf("YES\n");
    }

    else if (first % second == 0 || second % first == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}