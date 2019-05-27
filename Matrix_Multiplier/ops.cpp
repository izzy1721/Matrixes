#include <iostream>
#include "Matrix.h"

Matrix *Matrix::subtraction(Matrix *A, Matrix *B)
{
    //matrixes need to be the same size
    //to subtract one from another
    if (A->getXSize() != B->getXSize() && A->getYSize() != B->getYSize())
    {
        std::cout << "Matrixes must be same size to subtract\n";
        return nullptr;
    }

    //create result matrix
    int sizeX = A->getXSize();
    int sizeY = A->getYSize();
    Matrix *result = new Matrix(sizeX, sizeY);

    //subtract matching element and insert into result
    for (int i = 0; i < sizeX; i++)
    {
        for (int j = 0; j < sizeY; j++)
        {
            result->push(A->getArr()[i][j] - B->getArr()[i][j]);
        }
    }

    return result;
} //end subtraction()

Matrix *Matrix::addition(Matrix *A, Matrix *B)
{
    //matrixes need to be the same size
    //to add one from another
    if (A->getXSize() != B->getXSize() && A->getYSize() != B->getYSize())
    {
        std::cout << "Matrixes must be same size to add\n";
        return nullptr;
    }

    //create result matrix
    int sizeX = A->getXSize();
    int sizeY = A->getYSize();
    Matrix *result = new Matrix(sizeX, sizeY);

    //add matching element and insert into result
    for (int i = 0; i < sizeX; i++)
    {
        for (int j = 0; j < sizeY; j++)
        {
            result->push(A->getArr()[i][j] + B->getArr()[i][j]);
        }
    }

    return result;
} //end addition()