#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    int sum, num1, num2, num3, num4;
    for (i = 1; i <= n; i++)
    {
        scanf("%d %d %d %d", &sum, &num1, &num2, &num3);
        num4 = sum - (num1 + num2 + num3);
        printf("%d\n", num4);
    }
    return 0;
}