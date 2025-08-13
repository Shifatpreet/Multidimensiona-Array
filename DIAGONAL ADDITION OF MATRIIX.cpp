//SHIFATPREET SINGH
//24070123098
//ENTC B1
//DIAGONAL ADDITION OF A MATRIX
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    int matrix[100][100];

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int primarySum = 0;
    int secondarySum = 0;

    for (int i = 0; i < n; i++) {
        primarySum += matrix[i][i];             
        secondarySum += matrix[i][n - i - 1];   
    }

    int totalSum = primarySum + secondarySum;

    if (n % 2 == 1) {
        totalSum -= matrix[n / 2][n / 2];
    }

    cout << "Sum of both diagonals: " << totalSum << endl;

    return 0;
}
/*OUTPUT::
Enter the size of the square matrix (n x n): 3
Enter the elements of the matrix:
3
3
2
1
3
5
6
7
8
Sum of both diagonals: 22
*/
