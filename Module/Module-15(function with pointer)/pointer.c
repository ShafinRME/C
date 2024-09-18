#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    printf("The value of a  = %d\n", *p);
    printf("address of a  = %p\n", p);
    printf("address of a  = %p\n", &a);
    printf("address of a  = %p\n", &p);
    *p = 20;
    printf("The value of a  = %d\n", a);
    return 0;
}