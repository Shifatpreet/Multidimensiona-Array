# Multidimensional-Array
__Matrix Operations in C++__

Author: Shifatpreet Singh
Roll No: 24070123098
Class: ENTC B1

This project includes multiple programs that perform basic matrix operations such as:

-->Matrix input and display

-->Matrix addition

-->Matrix multiplication

-->Diagonal addition

-->Transpose of a matrix

-->Comparison of first and second row

-->Each program is written in C++ with a focus on 2D array manipulation.

__Programs and Algorithms__

__1. Matrix Input and Display__

__Description:__

Takes a matrix as input from the user and displays it in a structured format.

__Algorithm:__

1.Input number of rows and columns.

2.Declare a 2D array.

3.Use nested loops to input matrix elements.

4.Use nested loops again to print the matrix.

__2. Matrix Addition__

__Description:__

Reads two matrices of the same dimensions and outputs their sum.

__Algorithm:__

1.Input rows and columns for first matrix.

2.Read first matrix.

3.Input rows and columns for second matrix.

4.Read second matrix.

5.Add corresponding elements of both matrices.

6.Display the result.

__3. Matrix Multiplication__

__Description:__

Multiplies two matrices if the number of columns in the first matrix equals the number of rows in the second.

__Algorithm:__

1.Input dimensions and elements of matrix A.

2.Input dimensions and elements of matrix B.

3.Check if multiplication is valid (cols1 == rows2).

4.Multiply and store results in a third matrix using three nested loops.

5.Output the result.

__4. Diagonal Addition of a Matrix__

__Description:__

Calculates the sum of both primary and secondary diagonals of a square matrix.

__Algorithm:__

1.Input size n for an n x n matrix.

2.Read matrix elements.

3.Initialize primarySum and secondarySum.

4.Use a loop:

5.Add matrix[i][i] to primarySum.

6.Add matrix[i][n-i-1] to secondarySum.

7.Subtract the center element once if n is odd (to avoid double-counting).

8.Output total sum.

__5. Transpose of a Matrix__

__Description:__

Finds the transpose of a matrix by flipping it over its diagonal.

__Algorithm:__

1.Input rows and columns.

2.Read matrix elements.

3.Create a transpose by swapping matrix[i][j] to transpose[j][i].

4.Print the transposed matrix.

__6. Comparing First Row to Second Row__

__Description:__

Compares each corresponding element of the first row with the second row and states which is greater.

__Algorithm:__

1.Input matrix with at least 2 rows.

2.Read all elements.

3.Loop through each column:

4.Compare matrix[0][j] with matrix[1][j].

5.Display if they are equal, or which one is greater.


__Conclusion__

This project demonstrates fundamental operations on matrices using C++. Through various programs, the following concepts were practiced and understood:

Use of 2D arrays:

Nested loops for data manipulation

Conditional logic for validation

Matrix arithmetic operations

Diagonal and transpose handling

Row-wise comparison

These programs form the foundation for more advanced topics like linear algebra, computer graphics, and data transformations.
