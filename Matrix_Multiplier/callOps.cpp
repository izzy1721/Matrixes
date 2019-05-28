#include "library.h"

void doSubtraction()
{
    //enter a size of a matrix to be created
    std::cout << "Please enter a size for first matrix in form \"x y\":\n";
    int xSize = -1;
    int ySize = -1;
    std::cin >> xSize;
    std::cin >> ySize;

    //create new matrix and get the max elements that it can have
    Matrix *A = new Matrix(xSize, ySize);
    int maxElems = A->getMaxElem();

    //input the number of elements into the matrix
    int count = 0;
    int input = 0;
    std::cout << "Please enter " << maxElems << " numbers to\ninsert into the matrix:\n";
    while (count != maxElems)
    {
        std::cin >> input;
        A->push(input);
        count++;
    }

    //enter a size of a matrix to be created
    std::cout << "Please enter a size for second matrix in form \"x y\":\n";
    xSize = -1;
    ySize = -1;
    std::cin >> xSize;
    std::cin >> ySize;

    //create new matrix and get the max elements that it can have
    Matrix *B = new Matrix(xSize, ySize);
    maxElems = B->getMaxElem();

    //input the number of elements into the matrix
    count = 0;
    input = 0;
    std::cout << "Please enter " << maxElems << " numbers to\ninsert into the matrix:\n";
    while (count != maxElems)
    {
        std::cin >> input;
        B->push(input);
        count++;
    }

    //print out neewly created matricies
    std::cout << "Matrix A:\n";
    A->printArr();
    std::cout << "Matrix B:\n";
    B->printArr();

    //create pointer to a matrix
    Matrix *subtracted;
    //function subtraction() retunrs a pointer to a newly created matrix so point
    //matrix pointer created above to the result of the function
    subtracted = subtracted->subtraction(A, B);

    //A and B are no longer being used so delete them
    delete A;
    delete B;

    //if the function returned a nullptr can't do anything after this point so return
    if (subtracted == nullptr)
    {
        std::cout << "Error in computation\n";
        return;
    }
    //if not a nullptr then print out the reuslting matrix and then delete it
    std::cout << "Resulting Matrix:\n";
    subtracted->printArr();
    delete subtracted;

} //end of doSubtraction()

void doAddition()
{
    //enter a size of a matrix to be created
    std::cout << "Please enter a size for first matrix in form \"x y\":\n";
    int xSize = -1;
    int ySize = -1;
    std::cin >> xSize;
    std::cin >> ySize;

    //create new matrix and get the max elements that it can have
    Matrix *A = new Matrix(xSize, ySize);
    int maxElems = A->getMaxElem();

    //input the number of elements into the matrix
    int count = 0;
    int input = 0;
    std::cout << "Please enter " << maxElems << " numbers to\ninsert into the matrix:\n";
    while (count != maxElems)
    {
        std::cin >> input;
        A->push(input);
        count++;
    }

    //enter a size of a matrix to be created
    std::cout << "Please enter a size for second matrix in form \"x y\":\n";
    xSize = -1;
    ySize = -1;
    std::cin >> xSize;
    std::cin >> ySize;

    //create new matrix and get the max elements that it can have
    Matrix *B = new Matrix(xSize, ySize);
    maxElems = B->getMaxElem();

    //input the number of elements into the matrix
    count = 0;
    input = 0;
    std::cout << "Please enter " << maxElems << " numbers to\ninsert into the matrix:\n";
    while (count != maxElems)
    {
        std::cin >> input;
        B->push(input);
        count++;
    }

    //print out neewly created matricies
    std::cout << "Matrix A:\n";
    A->printArr();
    std::cout << "Matrix B:\n";
    B->printArr();

    //create pointer to a matrix
    Matrix *sum;
    //function addition() retunrs a pointer to a newly created matrix so point
    //matrix pointer created above to the result of the function
    sum = sum->addition(A, B);

    //A and B are no longer being used so delete them
    delete A;
    delete B;

    //if the function returned a nullptr can't do anything after this point so return
    if (sum == nullptr)
    {
        std::cout << "Error in computation\n";
        return;
    }
    //if not a nullptr then print out the reuslting matrix and then delete it
    std::cout << "Resulting Matrix:\n";
    sum->printArr();
    delete sum;

} //end of doAddition()

void doMultiply()
{
    //enter a size of a matrix to be created
    std::cout << "Please enter a size for first matrix in form \"x y\":\n";
    int xSize = -1;
    int ySize = -1;
    std::cin >> xSize;
    std::cin >> ySize;

    //create new matrix and get the max elements that it can have
    Matrix *A = new Matrix(xSize, ySize);
    int maxElems = A->getMaxElem();

    //input the number of elements into the matrix
    int count = 0;
    int input = 0;
    std::cout << "Please enter " << maxElems << " numbers to\ninsert into the matrix:\n";
    while (count != maxElems)
    {
        std::cin >> input;
        A->push(input);
        count++;
    }

    //enter a size of a matrix to be created
    std::cout << "Please enter a size for second matrix in form \"x y\":\n";
    xSize = -1;
    ySize = -1;
    std::cin >> xSize;
    std::cin >> ySize;

    //create new matrix and get the max elements that it can have
    Matrix *B = new Matrix(xSize, ySize);
    maxElems = B->getMaxElem();

    //input the number of elements into the matrix
    count = 0;
    input = 0;
    std::cout << "Please enter " << maxElems << " numbers to\ninsert into the matrix:\n";
    while (count != maxElems)
    {
        std::cin >> input;
        B->push(input);
        count++;
    }

    //print out neewly created matricies
    std::cout << "Matrix A:\n";
    A->printArr();
    std::cout << "Matrix B:\n";
    B->printArr();

    //create pointer to a matrix
    Matrix *product;
    //function multiplication() retunrs a pointer to a newly created matrix so point
    //matrix pointer created above to the result of the function
    product = product->multiplication(A, B);

    //A and B are no longer being used so delete them
    delete A;
    delete B;

    //if the function returned a nullptr can't do anything after this point so return
    if (product == nullptr)
    {
        std::cout << "Error in computation\n";
        return;
    }
    //if not a nullptr then print out the reuslting matrix and then delete it
    std::cout << "Resulting Matrix:\n";
    product->printArr();
    delete product;
} //end of doMultiply()

void doGauss()
{
    //enter a size of a matrix to be created
    std::cout << "Please enter a size for matrix in form \"x y\":\n";
    int xSize = -1;
    int ySize = -1;
    std::cin >> xSize;
    std::cin >> ySize;

    //create new matrix and get the max elements that it can have
    Matrix *A = new Matrix(xSize, ySize);
    int maxElems = A->getMaxElem();

    //input the number of elements into the matrix
    int count = 0;
    int input = 0;
    std::cout << "Please enter " << maxElems << " numbers to\ninsert into the matrix:\n";
    while (count != maxElems)
    {
        std::cin >> input;
        A->push(input);
        count++;
    }

    //print out neewly created matrix
    std::cout << "Matrix A:\n";
    A->printArr();

    //create pointer to a matrix
    Matrix *solved;
    //function gauss() retunrs a pointer to a newly created matrix so point
    //matrix pointer created above to the result of the function
    solved = solved->gauss(A);

    //A is no longer being used so delete it
    delete A;

    //if the function returned a nullptr can't do anything after this point so return
    if (solved == nullptr)
    {
        std::cout << "Error in computation\n";
        return;
    }
    //if not a nullptr then print out the reuslting matrix and then delete it
    std::cout << "Resulting Matrix:\n";
    solved->printArr();
    delete solved;
} //end of doGauss()
