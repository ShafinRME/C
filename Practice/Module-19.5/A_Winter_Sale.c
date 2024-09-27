#include <stdio.h>

int main()
{
    float discount, discPrice, mainPrice;

    scanf("%f %f", &discount, &discPrice);

    mainPrice = (100 * discPrice) / (100 - discount);

    printf("%0.2f", mainPrice);
    return 0;
}