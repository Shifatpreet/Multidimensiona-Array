//SHIFATPREET SINGH
//24070123098
//ENTC B1
//Comparing elements of first row to the second row
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    int matrix[100][100];
    cout << "Enter number of rows (at least 2): ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    if (rows < 2) {
        cout << "Matrix must have at least 2 rows for comparison.\n";
        return 1;
    }
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "\nComparison between first and second row:\n";
    for (int j = 0; j < cols; j++) {
        cout << "Element " << j + 1 << ": ";
        if (matrix[0][j] == matrix[1][j]) {
            cout << "Equal (" << matrix[0][j] << " == " << matrix[1][j] << ")";
        } else if (matrix[0][j] > matrix[1][j]) {
            cout << "First row is greater (" << matrix[0][j] << " > " << matrix[1][j] << ")";
        } else {
            cout << "Second row is greater (" << matrix[0][j] << " < " << matrix[1][j] << ")";
        }
        cout << endl;
    }

    return 0;
}
/*
OUTPUT
Enter number of rows (at least 2): 3
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

Comparison between first and second row:
Element 1: Second row is greater (1 < 4)
Element 2: Second row is greater (2 < 5)
Element 3: Second row is greater (3 < 6)
*/

