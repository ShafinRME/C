#include <stdio.h>

int main()
{
    long long int e, m, b, kat;

    scanf("%lld %lld %lld", &e, &m, &b);
    if (e == 0 || b == 0)
    {
        kat = 0;
        printf("%lld\n", kat);
    }
    else if (m == 0)
    {
        if (b * 2 <= e)
        {
            kat = b;
            printf("%lld\n", kat);
        }
        else
        {
            kat = e / 2;
            printf("%lld\n", kat);
        }
    }
    else if (e <= m && e <= b)
    {
        kat = e;
        printf("%lld\n", kat);
    }
    else if (m <= e && m <= b)
    {
        kat = m;
        e = e - m;
        b = b - m;
        if (b * 2 <= e)
        {
            kat = kat + b;
            printf("%lld\n", kat);
        }
        else
        {
            kat = kat + (e / 2);
            printf("%lld\n", kat);
        }
    }
    else
    {
        kat = b;
        printf("%lld\n", kat);
    }
    return 0;
}