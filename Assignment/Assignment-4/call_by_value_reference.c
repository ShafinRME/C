
// Pass by value

// #include <stdio.h>

// int doubleIt(int n)
// {
//     int dbl = n * 2;
//     return dbl;
// }

// int main()
// {
//     int a;
//     scanf("%d", &a);
//     int dblValue = doubleIt(a);
//     printf("%d", dblValue);
//     return 0;
// }

#include <stdio.h>

int doubleIt(int *n)
{
    *n = *n * 2;
    int mult = *n * 4;

    return mult;
}

int main()
{
    int a;
    scanf("%d", &a);

    int mult = doubleIt(&a);

    printf("%d\n%d", mult, a);
    return 0;
}