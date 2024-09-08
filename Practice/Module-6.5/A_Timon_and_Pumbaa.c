#include <stdio.h>

int main()
{
    int candi1, candi2, subtract;

    scanf("%d %d", &candi1, &candi2);

    subtract = candi1 - candi2;

    if (subtract >= 0)
    {
        printf("%d\n", subtract);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}