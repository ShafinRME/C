#include <stdio.h>

void printFiveToOne(int n)
{
    if (n == 0)
        return;
    printf("%d\n", n);
    printFiveToOne(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    printFiveToOne(n);
    return 0;
}
