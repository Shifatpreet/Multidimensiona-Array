//SHIFATPREET SINGH
//24070123098
//ENTC B1
//MULTIPLICATION OF MATRIX
#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;
    cout << "Enter rows and columns of first matrix: ";
    cin >> rows1 >> cols1;
    int mat1[100][100];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter rows and columns of second matrix: ";
    cin >> rows2 >> cols2;

    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible! Columns of first matrix must equal rows of second matrix.\n";
        return 1;
    }

    int mat2[100][100];
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> mat2[i][j];
        }
    }

    int result[100][100] = {0};

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Resultant matrix after multiplication:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/*OUTPUT
Enter rows and columns of first matrix: 3
2
Enter elements of first matrix:
2
3
42
52
5
32
Enter rows and columns of second matrix: 2
3
Enter elements of second matrix:
42
43
13
54
23
54
Resultant matrix after multiplication:
246 155 188 
4572 3002 3354 
1938 951 1793 
*/

