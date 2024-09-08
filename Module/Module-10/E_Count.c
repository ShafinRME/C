#include <stdio.h>
#include <string.h>

int main()
{
    char nmb[100001];
    int sum = 0;

    scanf("%s", nmb);

    for (int i = 0; i < strlen(nmb); i++)
    {
        sum = sum + (nmb[i] - '0');
    }

    printf("%d\n", sum);
    return 0;
}