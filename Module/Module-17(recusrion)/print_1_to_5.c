#include <stdio.h>

void printOneToFive(int n, int i)
{
    if (i == n + 1)
        return;
    printf("%d\n", i);
    printOneToFive(n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    printOneToFive(n, 1);
    return 0;
}
