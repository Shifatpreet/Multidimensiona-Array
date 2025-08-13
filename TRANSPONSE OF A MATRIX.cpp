//SHIFATPREET SINGH
//24070123098
//ENTC B1
//TRANSPONSE OF A MATRIX
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    int matrix[100][100], transpose[100][100];
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
OUTPUT
Enter number of rows: 3
Enter number of columns: 3
Enter elements of the matrix:
1
2
3
4
5
6
7
8
9
Transpose of the matrix:
1 4 7 
2 5 8 
3 6 9 
*/

