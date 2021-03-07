#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter size of matrix for Matrix Addition: ";
    cin >> row >> col;
    int a[row][col], b[row][col], add[row][col], sub[row][col], mul[row][col];

    cout << "Enter 1st matrix: " << endl;
    for (int i = 1; i <= row; ++i)
        for (int j = 1; j <= col; ++j)
            cin >> a[i][j];

    cout << "Enter 2nd matrix: " << endl;
    for (int i = 1; i <= row; ++i)
        for (int j = 1; j <= col; ++j)
            cin >> b[i][j];

    // Addition of 2 matrix.
    for (int i = 1; i <= row; ++i)
        for (int j = 1; j <= col; ++j)
            add[i][j] = a[i][j] + b[i][j];
    // Substruction of two matrix.
    for (int i = 1; i <= row; ++i)
        for (int j = 1; j <= col; ++j)
            sub[i][j] = a[i][j] - b[i][j];

    //// Initializing elements of matrix mult to 0.
    for (int i = 1; i <= row; ++i)
        for (int j = 1; j <= col; ++j)
        {
            mul[i][j] = 0;
        }

        // Multiplication of two matrix.
    for (int i = 1; i <= row; ++i)
        for (int j = 1; j <= col; ++j)
            for (int k = 1; k <= row; ++k)
                mul[i][j] += a[i][k] * b[k][j];

    // Output of addition matrix.
    cout << "Addition of 2 matrix: " << endl;
    for (int i = 1; i <= row; ++i)
    {
        for (int j = 1; j <= col; ++j)
            cout << add[i][j] << " ";
        cout << endl;
    }

    // Output of substruction matrix.
    cout << "Substruction of 2 matrix: " << endl;
    for (int i = 1; i <= row; ++i)
    {
        for (int j = 1; j <= col; ++j)
            cout << sub[i][j] << " ";
        cout << endl;
    }
    // Output of multiplication matrix.
    cout << "Multiplication of 2 matrix: " << endl;
    for (int i = 1; i <= row; ++i)
    {
        for (int j = 1; j <= col; ++j)
            cout << mul[i][j] << " ";
        cout << endl;
    }

    return 0;
}