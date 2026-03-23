#include <iostream>
using namespace std;

int main()
{
    // =========================================================
    // PART 1: 2D Arrays Definitions & Initialization
    // =========================================================
    // int m[2][4];
    // int m[2][4] = {};
    // int m[2][4] = { 1,2,3,4,5,6 };
    // int m[][4] = { 1,2,3,4,5,6 };   // Valid: 6/4 = 1.5 -> 2 rows
    // int m[2][] = { 1,2,3,4,5,6 };   // Error: Column size must be specified

    int m[2][4] = { {1,2,3,4}, {5,6} }; // Row 0: {1,2,3,4}, Row 1: {5,6,0,0}

    // =========================================================
    // PART 2: Input Data from User
    // =========================================================
    /*
    cout << "Enter 8 values for the matrix (2x4):\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> m[i][j];
        }
    }
    */

    // =========================================================
    // PART 3: Summation Operations
    // =========================================================
    int sum = 0;

    // A. Sum All Items
    /*
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum += m[i][j];
        }
    }
    cout << "Total Sum = " << sum << endl;
    */

    // B. Sum Specific Row (e.g., Row 0)
    /*
    sum = 0;
    for (int j = 0; j < 4; j++)
    {
        sum += m[0][j];
    }
    cout << "Sum of Row 0 = " << sum << endl;
    */

    // C. Sum Specific Column (e.g., Col 0)
    /*
    sum = 0;
    for (int i = 0; i < 2; i++)
    {
        sum += m[i][0];
    }
    cout << "Sum of Col 0 = " << sum << endl;
    */

    // D. Sum Each Column Separately
    cout << "--- Sum of Each Column ---\n";
    for (int j = 0; j < 4; j++)
    {
        sum = 0;
        for (int i = 0; i < 2; i++)
        {
            sum += m[i][j];
        }
        cout << "Sum of Column " << j << " = " << sum << endl;
    }

    // =========================================================
    // PART 4: Memory Size Calculation
    // =========================================================
    int totalSize = sizeof(m);      // Size of the whole matrix in bytes
    int rowSize = sizeof(m[0]);     // Size of one row in bytes
    cout << "\nTotal matrix size: " << totalSize << " bytes" << endl;
    cout << "One row size: " << rowSize << " bytes" << endl;

    // =========================================================
    // PART 5: Matrix Display (Print)
    // =========================================================
    cout << "\n--- Matrix Display (2x4) ---\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }

    /* Upcoming Topics:
       - Sum Diagonals (Main & Secondary)
       - Matrix Addition (Matrix1 + Matrix2)
       - Matrix Transpose
    */

    return 0;
}
