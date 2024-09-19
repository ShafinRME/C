#include <stdio.h>

void reversePrint(int n, int i)
{
    if (i == n + 1)
        return;
    reversePrint(n, i + 1);
    printf("%d\n", i);
}

int main()
{
    int n;
    scanf("%d", &n);

    reversePrint(n, 1);
    return 0;
}