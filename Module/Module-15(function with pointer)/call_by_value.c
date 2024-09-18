#include <stdio.h>

int doubleIt(int n)
{
    int dbl = n * 2;
    return dbl;
}

int main()
{
    int a;
    scanf("%d", &a);
    int dblValue = doubleIt(a);
    printf("%d", dblValue);
    return 0;
}