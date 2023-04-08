/*Design a c program on whether the given Matrix is Diagonal matrix or not 
*/ 
#include <stdio.h>
int main()
{
    int row, cols;
    printf("Enter Matrix Rows Length : ");
    scanf("%d", &row);

    printf("Enter Matrix Columm : ");
    scanf("%d", &cols);

    int matrixA[row][cols];
    // MATRIX INPUT
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter Matrix Value at Row %d Column &d ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }
    return 0;
}