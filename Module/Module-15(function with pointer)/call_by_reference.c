#include <stdio.h>

int doubleIt(int *n)
{
    *n = *n * 2;
}

int main()
{
    int a;
    scanf("%d", &a);

    doubleIt(&a);

    printf("%d", a);
    return 0;
}