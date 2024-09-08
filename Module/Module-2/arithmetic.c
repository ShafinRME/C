#include <stdio.h>

int main()
{
    int a = 10, b = 7;
    int sum, sub, multi, division, rem;
    float division2;
    sum = a + b;
    sub = a - b;
    multi = a * b;
    division = a / b;
    division2 = a * 1.0 / b;
    rem = a % b;

    printf("Sum = %d\nSubtraction = %d\nMultiplication = %d\nDivisor = %d\nDivision2 = %f\nRemainder = %d\n", sum, sub, multi, division, division2, rem);
    return 0;
}