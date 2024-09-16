#include <stdio.h>

int sum_last_first(int num)
{
    int first_digit = num / 1000;
    int last_digit = num % 10;

    int sum = first_digit + last_digit;

    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);

    int sum = sum_last_first(n);
    printf("%d", sum);

    return 0;
}