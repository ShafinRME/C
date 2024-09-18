#include <stdio.h>

// int arrayF(int arr[], int n)
// {
//     arr[3] = 67;
// }

// int main()
// {
//     int arr[6] = {3, 2, 5, 7, 12, 67};

//     arrayF(arr, 6);

//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

int stringF(char arr[])
{
    arr[3] = 'L';
}

int main()
{
    char arr[6];
    scanf("%s", arr);
    stringF(arr);

    printf("%s", arr);

    return 0;
}