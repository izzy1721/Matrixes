#include "library.h"

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
    //to add one to another
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

Matrix *Matrix::multiplication(Matrix *A, Matrix *B)
{
    //matrix MxN can only be multiplied by matrix NxP
    if (A->getYSize() != B->getXSize())
    {
        std::cout << "Matrixes must be proper dimmensions to multiply\n";
        return nullptr;
    }
    //resulting matrix of above example will be an MxP matrix
    //create result matrix
    int sizeX = A->getXSize();
    int sizeY = B->getYSize();
    Matrix *result = new Matrix(sizeX, sizeY);

    //multiply matricies
    /*
    logic here
    */
    std::cout << "NEED TO FINISH MULTIPLYING FUNCTION!\n";
    return result;
} //end multiplication()
