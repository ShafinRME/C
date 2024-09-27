#include <stdio.h>

int main()
{
    int mult, num1, num2, num3, num4;
    scanf("%d %d %d %d", &mult, &num1, &num2, &num3);

    num4 = mult / (num1 * num2 * num3);

    printf("%d\n", num4);
    return 0;
}