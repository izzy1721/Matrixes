#include "library.h"

void doSubtraction()
{
    std::cout << "Please enter a size for first matrix in form \"x y\":\n";
    int xSize = -1;
    int ySize = -1;
    std::cin >> xSize;
    std::cin >> ySize;

    Matrix *A = new Matrix(xSize, ySize);
    int maxElems = A->getMaxElem();
    int count = 0;
    int input = 0;
    std::cout << "Please enter " << maxElems << " numbers to\ninsert into the matrix:\n";
    while (count != maxElems)
    {
        std::cin >> input;
        A->push(input);
        count++;
    }
    std::cout << "Please enter a size for second matrix in form \"x y\":\n";
    xSize = -1;
    ySize = -1;
    std::cin >> xSize;
    std::cin >> ySize;

    Matrix *B = new Matrix(xSize, ySize);
    maxElems = B->getMaxElem();
    count = 0;
    input = 0;
    std::cout << "Please enter " << maxElems << " numbers to\ninsert into the matrix:\n";
    while (count != maxElems)
    {
        std::cin >> input;
        B->push(input);
        count++;
    }
    std::cout << "Matrix A:\n";
    A->printArr();
    std::cout << "Matrix B:\n";
    B->printArr();

    Matrix *subtracted;
    subtracted = subtracted->subtraction(A, B);

    if (subtracted == nullptr)
    {
        std::cout << "Error in computation\n";
        return;
    }

    delete A;
    delete B;
    std::cout << "Resulting Matrix:\n";
    subtracted->printArr();
    delete subtracted;

} //end of doSubtraction()

void doAddition()
{
    std::cout << "Please enter a size for first matrix in form \"x y\":\n";
    int xSize = -1;
    int ySize = -1;
    std::cin >> xSize;
    std::cin >> ySize;

    Matrix *A = new Matrix(xSize, ySize);
    int maxElems = A->getMaxElem();
    int count = 0;
    int input = 0;
    std::cout << "Please enter " << maxElems << " numbers to\ninsert into the matrix:\n";
    while (count != maxElems)
    {
        std::cin >> input;
        A->push(input);
        count++;
    }
    std::cout << "Please enter a size for second matrix in form \"x y\":\n";
    xSize = -1;
    ySize = -1;
    std::cin >> xSize;
    std::cin >> ySize;

    Matrix *B = new Matrix(xSize, ySize);
    maxElems = B->getMaxElem();
    count = 0;
    input = 0;
    std::cout << "Please enter " << maxElems << " numbers to\ninsert into the matrix:\n";
    while (count != maxElems)
    {
        std::cin >> input;
        B->push(input);
        count++;
    }
    std::cout << "Matrix A:\n";
    A->printArr();
    std::cout << "Matrix B:\n";
    B->printArr();

    Matrix *sum;
    sum = sum->addition(A, B);

    if (sum == nullptr)
    {
        std::cout << "Error in computation\n";
        return;
    }

    delete A;
    delete B;
    std::cout << "Resulting Matrix:\n";
    sum->printArr();
    delete sum;

} //end of doAddition()

void doMultiply()
{
    std::cout << "Please enter a size for first matrix in form \"x y\":\n";
    int xSize = -1;
    int ySize = -1;
    std::cin >> xSize;
    std::cin >> ySize;

    Matrix *A = new Matrix(xSize, ySize);
    int maxElems = A->getMaxElem();
    int count = 0;
    int input = 0;
    std::cout << "Please enter " << maxElems << " numbers to\ninsert into the matrix:\n";
    while (count != maxElems)
    {
        std::cin >> input;
        A->push(input);
        count++;
    }
    std::cout << "Please enter a size for second matrix in form \"x y\":\n";
    xSize = -1;
    ySize = -1;
    std::cin >> xSize;
    std::cin >> ySize;

    Matrix *B = new Matrix(xSize, ySize);
    maxElems = B->getMaxElem();
    count = 0;
    input = 0;
    std::cout << "Please enter " << maxElems << " numbers to\ninsert into the matrix:\n";
    while (count != maxElems)
    {
        std::cin >> input;
        B->push(input);
        count++;
    }
    std::cout << "Matrix A:\n";
    A->printArr();
    std::cout << "Matrix B:\n";
    B->printArr();

    Matrix *product;

    product = product->multiplication(A, B);

    if (product == nullptr)
    {
        std::cout << "Error in computation\n";
        return;
    }

    delete A;
    delete B;
    std::cout << "Resulting Matrix:\n";
    product->printArr();
    delete product;
} //end of doMultiply()

void doGauss()
{
    std::cout << "Please enter a size for matrix in form \"x y\":\n";
    int xSize = -1;
    int ySize = -1;
    std::cin >> xSize;
    std::cin >> ySize;

    Matrix *A = new Matrix(xSize, ySize);
    int maxElems = A->getMaxElem();
    int count = 0;
    int input = 0;
    std::cout << "Please enter " << maxElems << " numbers to\ninsert into the matrix:\n";
    while (count != maxElems)
    {
        std::cin >> input;
        A->push(input);
        count++;
    }
    A->printArr();

    Matrix *solved;
    solved = solved->gauss(A);
    if (solved == nullptr)
    {
        std::cout << "Error in computation\n";
        return;
    }

    delete A;
    solved->printArr();
    delete solved;
} //end of doGauss()
