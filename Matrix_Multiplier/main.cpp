#include <iostream>
#include "Matrix.h"

int main()
{
    std::cout << "WELCOME TO BASIC MATRIX CALCULATOR APP!\n";
    std::cout << "Please enter a size for matrix in form \"x y\" or use default 2x2 matrix by just pressing enter twice:";
    int xSize = -1;
    int ySize = -1;
    std::cin >> xSize;
    std::cin >> ySize;
    Matrix *test;
    if (xSize == -1 || ySize == -1)
    {
        test = new Matrix;
    }
    else
    {
        test = new Matrix(xSize, ySize);
    }

    int maxElems = test->getMaxElem();
    int count = 0;
    int input = 0;

    std::cout << "Please enter " << maxElems << " numbers to\ninsert into the matrix:\n";
    while (count != maxElems)
    {
        std::cin >> input;
        test->push(input);
        count++;
    }

    test->printArr();

    return 0;
}