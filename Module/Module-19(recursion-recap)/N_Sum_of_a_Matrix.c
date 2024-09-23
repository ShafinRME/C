#include <stdio.h>

int main()
{
    int row, col, i, j;
    scanf("%d %d", &row, &col);

    int mat1[row][col], mat2[row][col], mat3[row][col];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Using Recursion
// #include <stdio.h>

// void sumMatrix(int mat1[1001][1001], int row, int col, int mat2[1001][1001], int mat3[1001][1001], int r, int c)
// {
//     // Base case: if we have processed all rows
//     if (r == row)
//         return;

//     // If all columns in this row are processed, move to the next row
//     if (c == col)
//     {
//         sumMatrix(mat1, row, col, mat2, mat3, r + 1, 0);  // Move to next row, start at column 0
//         return;
//     }

//     // Sum the corresponding elements of mat1 and mat2
//     mat3[r][c] = mat1[r][c] + mat2[r][c];

//     // Recur for the next element in the current row
//     sumMatrix(mat1, row, col, mat2, mat3, r, c + 1);  // Move to next column
// }

// int main()
// {
//     int row, col, i, j;
//     scanf("%d %d", &row, &col);

//     int mat1[1001][1001], mat2[1001][1001], mat3[1001][1001];

//     // Input matrix 1
//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             scanf("%d", &mat1[i][j]);
//         }
//     }

//     // Input matrix 2
//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             scanf("%d", &mat2[i][j]);
//         }
//     }

//     // Call the function to sum the matrices
//     sumMatrix(mat1, row, col, mat2, mat3, 0, 0);  // Start at row 0, column 0

//     // Output the resulting matrix
//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             printf("%d ", mat3[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
