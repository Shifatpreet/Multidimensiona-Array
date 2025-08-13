//SHIFTPREET SINGH
//24070123098
//ENTC B1 
//Addition of Two Matrix

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    int mat1[100][100];  
    
    
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat1[i][j];
        }
    }
    
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    int mat2[100][100];  
    
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat2[i][j];
        }
    }
    cout << "The matrix you have entered:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat1[i][j] + mat2[i][j]  << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
Enter the number of rows: 2
Enter the number of columns: 2
Enter the elements of the matrix:
1 2
3 4
Enter the number of rows: 2
Enter the number of columns: 2
Enter the elements of the matrix:
4 5
6 7
The matrix you have entered:
5 7 
9 11 
*/

