#include <stdio.h>
#include <string.h>

int main()
{
    int i, n;
    int sum = 0;
    scanf("%d", &n);

    char str[1000001];
    scanf("%s", str);

    for (i = 0; i < n; i++)
    {
        int val = str[i] - '0';
        sum = sum + val;
    }
    printf("%d", sum);
    return 0;
}