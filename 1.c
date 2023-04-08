/*
Matrix : Data is in the form of rows/cols
How do you store matrix in a variable : Array(MULTI DIMENSION)

Types of Matrices  :

1)Row Matrix :
A row matrix has only one row but any number of columns. A matrix is said to be a row matrix if it has only row.

2)Column Matrix :
A column  matrix has only one column but any number of rows. A matrix is said to be a column matrix if it has only column.

3)Square Marix :

When no of rows and no of columns are equal,
   Note: Performing diagonal operations is only possible on Square matrix

4)Rectangular Matrix :
A matrix is said to be a rectangular matrix if the number of rows is not equal to the number of columns

5) Diagonal Matrix :
    1) A diagonal matrix is a square matrix,
    2)All diagonal matrix element must be  zero
    3)all non diagonal matrix element must be non zero

6)Null Matrix (Zero Matrix) :
  A matrix is said to zero matrix or null matrix if all its elements are zero.

7)Scalar Matrix :
  it must be a Diagonal Matrix
  A diagonal matrix is said to be a scalar matrix if all the element in its non diagonal are non zero constants

8)Unit Matrix or Identity Matrix :
    if a square matrix has all elements are 0 and diagonal element are non zero, it is called identity matrix

*/
#include <stdio.h>
int main()
{
    int row, cols;
    printf("Enter Matrix rows Length : ");
    scanf("%d", &row);

    printf("Enter Matrix column Length : ");
    scanf("%d", &cols);

    int matrixA[row][cols];
    //MATRIX INPUT : 

    for(int i=0; i<row;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("Enter Matrix Value at  Rows %d Column %d : ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    //PRINTING MATRIX : 
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<cols; j++)
        {
            printf("%d ", matrixA[i][j]);
        }
        printf("\n");
    }
    return 0;
}