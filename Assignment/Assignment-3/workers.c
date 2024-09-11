#include <stdio.h>

int main()
{
    int nDays, M1, D, M2;
    scanf("%d %d %d", &M1, &M2, &D);

    nDays = (M1 * D) / M2;

    printf("%d\n", nDays);
    return 0;
}