#include <iostream>
#include <cstdlib>
using namespace std;

class Matrix
{
    int rows = 0, columns = 0; 

    // Declare a memory block of
    // size rows * columns
    int* arr = new int[rows * columns];

public:
    Matrix(int rows, int columns, int* arr)
    {
        this->rows = rows;
        this->columns = columns;
        this->arr = arr;
    }
    
    Matrix operator + (Matrix &obj){
        int* result =  new int[rows * columns];
        //loop through both the matrices and store the values in the result matrix
        // Traverse the 2D array
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                //result[i][j] = arr[i][j] + obj.arr[i][j];
                int * arr1 = obj.arr;
                *(result + i * columns + j) = *(arr + i * columns + j) + *(arr1 + i * columns + j);
            }
        }
        //create a matrix from the result and return it
        Matrix m1(rows, columns, result);
        return m1;
    }

    Matrix operator - (Matrix &obj){
        int* result =  new int[rows * columns];
        //loop through both the matrices and store the values in the result matrix
        // Traverse the 2D array
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                //result[i][j] = arr[i][j] + obj.arr[i][j];
                int * arr1 = obj.arr;
                *(result + i * columns + j) = *(arr + i * columns + j) - *(arr1 + i * columns + j);
            }
        }
        //create a matrix from the result and return it
        Matrix m1(rows, columns, result);
        return m1;
    }

    //https://www.geeksforgeeks.org/how-to-declare-a-2d-array-dynamically-in-c-using-new-operator/
    void display(){
        // Traverse the matrix (2-D array)
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                // Print values of the memory block
                cout << *(arr + i * columns + j)
                    << " ";
            }
            cout << endl;
        }
    }
};


int* matrix_input(int rows, int columns, int array_no){
   
    // Declare a memory block of size rows*columns
    int* arr = new int[rows * columns];
 
    // Traverse the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            int input_element;
            cin >> input_element;
            *(arr + i * columns + j) = input_element; //should change to cin
        }
    }
    return arr;
}


int main()
{
    int rows, columns, c = 0, array_no = 1;
    cout << "Input values for array ::" << array_no; 
    cin >> rows;
    cin >> columns;

    //input 2 matrices
    int* mat1 = matrix_input(rows, columns, array_no);
    array_no ++;
    cout << "Input values for array ::" << array_no; 
    cin >> rows;
    cin >> columns;
    int* mat2 = matrix_input(rows, columns, array_no);

    Matrix m1(rows, columns, mat1);
    Matrix m2(rows, columns, mat2);

    //now do matrix addition
    Matrix result = m1 + m2;
    result.display();

    //now matrix subtraction
    result = m1 - m2;
    result.display();

}