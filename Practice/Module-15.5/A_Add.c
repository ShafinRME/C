#include <stdio.h>

int sumReturn(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = sumReturn(a, b);

    printf("%d", sum);

    return 0;
}