#include <stdio.h>

float pi_value()
{
    float pi = 3.1416;
    return pi;
}

int main()
{
    float value;
    value = pi_value();
    printf("%0.4lf", value);
    return 0;
}