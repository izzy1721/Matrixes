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

int dotProduct(std::vector<int> A, std::vector<int> B)
{
    if (A.size() != B.size())
    {
        return -1;
    }
    int n = A.size();
    int dotProduct = 0;
    /*
    Dot product for two vectors is computed as so:
    Vector A = [1 2 3]
    Vector B = [4 5 6]
    Dot Product = 1*4 + 2*5 + 3*6 = 32
    */
    for (int i = 0; i < n; i++)
    {
        dotProduct += (A.at(i) * B.at(i));
    }
    return dotProduct;
} //end of dotProduct()

Matrix *Matrix::multiplication(Matrix *A, Matrix *B)
{
    /*
    logic of how to multiply matricies here:
    https://www.mathsisfun.com/algebra/matrix-multiplying.html
    */

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

    std::vector<int> currentRow;
    std::vector<int> currentCol;
    int insertThis;

    //multiply matricies by computing the dot products of rows of
    //A and columns of B and pushing these values to result
    for (int i = 0; i < sizeY; i++)
    {
        for (int j = 0; j < sizeX; j++)
        {
            for (int l = 0; l < B->getXSize(); l++)
            {
                //get cols of B
                currentCol.push_back(B->getArr()[l][i]);
            }

            for (int k = 0; k < A->getYSize(); k++)
            {
                //grab rows of A
                currentRow.push_back(A->getArr()[j][k]);
            }
            //compute dot product of current row and column
            insertThis = dotProduct(currentRow, currentCol);
            //push this value into the result matrix
            result->push(insertThis);
            //clear row and col vectors to get values again
            currentRow.clear();
            currentCol.clear();
        } //end of j loop
    }     //end of i loop

    return result;
} //end multiplication()

Matrix *Matrix::gauss(Matrix *A)
{
    /*
    For reference on what Gauss-Jordan Elimination is 
    and how to perform it: 
    https://onlinecourses.science.psu.edu/statprogram/reviews/matrix-algebra/gauss-jordan-elimination
    */
    std::cout << "NEED TO FINISH GAUSS FUNCTION!\n";
    return nullptr;
} //end of gauss()
