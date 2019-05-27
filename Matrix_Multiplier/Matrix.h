#include <iostream>

class Matrix
{
private:
    int **arr;
    int xSize;
    int ySize;
    int inUse;
    int maxElem;

    //initialize dynamic 2d array
    void initArr()
    {
        arr = new int *[xSize];
        for (int i = 0; i < xSize; i++)
        {
            arr[i] = new int[ySize];
        }
    }

public:
    //default constructor initializes a 2x2 matrix
    Matrix()
    {
        std::cout << "No x and y dimmensions specified; initalizing a 2x2 matrix" << std::endl;
        //set dimmensions
        setXSize(2);
        setYSize(2);
        //set max elements
        int size = 2 * 2;
        setMaxElem(size);
        setInUse(0);
        //initalize array
        initArr();
    }

    //specific matrix size initialization
    Matrix(int x, int y)
    {
        //set dimmensions
        setXSize(x);
        setYSize(y);
        //set max elements
        int size = x * y;
        setMaxElem(size);
        setInUse(0);
        //initalize array
        initArr();
    }

    //deconstructor needs to delete dynamic 2d array
    ~Matrix()
    {
        delete[] arr;
    }
    
    //forward definitions of methods to make outside of class 
    //update makefile when adding in a cpp file for newly created
    //methods. Test locally before committing
    Matrix subtraction(Matrix A, Matrix B);

    int **getArr() { return arr; }

    int getXSize() { return xSize; }

    int getYSize() { return ySize; }

    int getMaxElem() { return maxElem; }

    int getInUse() { return inUse; }

    void setXSize(int x) { xSize = x; }

    void setYSize(int x) { ySize = x; }

    void setMaxElem(int x) { maxElem = x; }

    void setInUse(int x) { inUse = x; }

    void compute2Dindex(int &x, int &y, int pos)
    {
        int width = getXSize();
        x = pos % width;
        y = pos / width;
    } //end of compute2Dindex()

    //push new element into the next available position in the matrix
    void push(int x)
    {
        //check if matrix is full
        int max = getMaxElem();
        int used = getInUse();
        if (used == max)
        {
            std::cout << "The current matrix is full" << std::endl;
            return;
        }
        //get position to insert in 2d array
        int insertX;
        int insertY;
        compute2Dindex(insertX, insertY, used);

        //insert and update inUse
        this->getArr()[insertX][insertY] = x;
        used += 1;
        setInUse(used);
    } //end of push()

    //delete last element inserted into the matrix
    void pop()
    {
        int indexToDelete = getInUse();
        int deleteX;
        int deleteY;

        compute2Dindex(deleteX, deleteY, indexToDelete);

        //mark as not being used instead of deleting
        //if matrix not full cannot perform computation anyway
        this->getArr()[deleteX][deleteY] = -999;
        //keep track of inUse
        setInUse(this->getInUse() - 1);

    } //end pop()

    //if the matrix is full print it out to the user
    void printArr()
    {
        int x = getXSize();
        int y = getYSize();
        int **temp = getArr();

        if (this->getInUse() != this->getMaxElem())
        {
            std::cout << "Matrix not full cannot display\n";
            return;
        }

        for (int i = 0; i < (x * y) + 3; i++)
        {
            std::cout << "-";
        }
        std::cout << "\n";

        for (int i = 0; i < x; i++)
        {
            std::cout << "| ";
            for (int j = 0; j < y; j++)
            {
                std::cout << temp[i][j] << " ";
            }
            std::cout << "| ";
            std::cout << std::endl;
        }

        for (int i = 0; i < (x * y) + 3; i++)
        {
            std::cout << "-";
        }
        std::cout << "\n";
    } //end of printArr()
};
