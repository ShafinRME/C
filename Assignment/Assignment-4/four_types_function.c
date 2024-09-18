#include <stdio.h>

// Has Return + Has Paramater

// int getMultiplication(int n1, int n2)
// {
//     int mult = n1 * n2;
//     return mult;
// }

// int main()
// {
//     int n1, n2;
//     scanf("%d %d", &n1, &n2);

//     int mult = getMultiplication(n1, n2);

//     printf("%d", mult);
//     return 0;
// }

// Has Return + No Parameter
// float celToFaren()
// {
//     float cel;
//     scanf("%f", &cel);
//     float fer = ((cel * 9) / 5) + 32;
//     return fer;
// }

// int main()
// {

//     float faren = celToFaren();
//     printf("%f", faren);
//     return 0;
// }

// No return + Has Parameter

// void getTriangleArea(int base, int height)
// {
//     float area = 0.5 * height * base;
//     printf("%f", area);
// }

// int main()
// {
//     int base, height;
//     scanf("%d %d", &base, &height);

//     getTriangleArea(base, height);

//     return 0;
// }

void getEven(void)
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
}

int main()
{
    getEven();
    return 0;
}