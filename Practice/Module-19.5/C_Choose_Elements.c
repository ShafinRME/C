// #include <stdio.h>

// int main()
// {
//     long long int n, i, j, numItem;

//     scanf("%lld %lld", &n, &numItem);

//     long long int arr[n];
//     long long int arraySum = 0;

//     for (i = 0; i < n; i++)
//     {
//         scanf("%lld", &arr[i]);
//     }
//     for (i = 0; i < n - 1; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             if (arr[i] <= arr[j])
//             {
//                 long long int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     // for (i = 0; i < n; i++)
//     // {
//     //     printf("%d ", arr[i]);
//     // }
//     for (i = 0; i < numItem; i++)
//     {
//         arraySum = arraySum + arr[i];
//     }
//     if (arraySum < 0)
//     {
//         printf("0\n");
//     }
//     else
//     {
//         printf("%lld", arraySum);
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    long long int int_a = *(long long int *)a;
    long long int int_b = *(long long int *)b;

    if (int_a < int_b)
        return 1;
    if (int_a > int_b)
        return -1;
    return 0;
}

int main()
{
    long long int n, i, numItem;

    scanf("%lld %lld", &n, &numItem);

    long long int arr[n];
    long long int arraySum = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    qsort(arr, n, sizeof(long long int), compare);

    for (i = 0; i < numItem; i++)
    {
        arraySum += arr[i];
    }

    if (arraySum < 0)
    {
        printf("0\n");
    }
    else
    {
        printf("%lld\n", arraySum);
    }

    return 0;
}
