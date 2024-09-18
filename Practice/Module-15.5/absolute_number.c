#include <stdio.h>
#include <stdlib.h>

int my_abs(int n)
{
    int absNum = abs(n);

    return absNum;
}

int main()
{
    int n;
    scanf("%d", &n);

    int absoluteNumber = my_abs(n);

    printf("%d", absoluteNumber);
    return 0;
}