#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int divi = n / 1000;
    if (divi % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}