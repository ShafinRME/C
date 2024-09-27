#include <stdio.h>

int main()
{
    long long int memo, momo, divisor;
    scanf("%lld %lld %lld", &memo, &momo, &divisor);

    if (memo % divisor == 0 && momo % divisor == 0)
    {
        printf("Both\n");
    }

    else if (memo % divisor == 0)
    {
        printf("Memo\n");
    }

    else if (momo % divisor == 0)
    {
        printf("Momo\n");
    }
    else
    {
        printf("No One\n");
    }
    return 0;
}