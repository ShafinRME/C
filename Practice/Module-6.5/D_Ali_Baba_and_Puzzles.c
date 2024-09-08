#include <stdio.h>

int main()
{

    long long int num1, num2, num3, result;

    scanf("%lld %lld %lld %lld", &num1, &num2, &num3, &result);

    if ((num1 + num2 - num3 == result) || (num1 + num2 * num3 == result) || (num1 - num2 + num3 == result) || (num1 - num2 * num3 == result) || (num1 * num2 - num3 == result) || (num1 * num2 + num3 == result))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}