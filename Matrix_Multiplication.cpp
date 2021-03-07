#include <iostream>
using namespace std;
int main()
{
    int r1, c1, r2, c2;

    cout << "Enter row & column for 1st matrix: ";
    cin >> r1 >> c1;
    cout << "Enter row & column for 2nd matrix: ";
    cin >> r2 >> c2;

    int a[r1][c1], b[r2][c2], c[r1][c2];

    /*
    If column of 1st matrix is not equal to row of 2nd matrix,
    ask the user to enter the size of matrix again.
    */
    while (c1 != r2)
    {
        cout << "Error! column of 1st matrix not equal to row of 2nd." << endl;

        cout << "Enter row & column for 1st matrix: ";
        cin >> r1 >> c1;
        cout << "Enter row & column for 2nd matrix: ";
        cin >> r2 >> c2;
    }

    // Store element of 1st matrix.
    cout << "Enter elements of 1st matrix: " << endl;
    for (int i = 1; i <= r1; ++i)
        for (int j = 1; j <= c1; ++j)
            cin >> a[i][j];

    // Store element of 2nd matrix.
    cout << "Enter elements of 2nd matrix: " << endl;
    for (int i = 1; i <= r2; ++i)
        for (int j = 1; j <= c2; ++j)
            cin >> b[i][j];

    // Initializing element of matrix c to 0.
    for (int i = 1; i <= r1; ++i)
        for (int j = 1; j <= c2; ++j)
            c[i][j] = 0;

    // Multiplying 2 matrix.
    for (int i = 1; i <= r1; ++i)
        for (int j = 1; j <= c2; ++j)
            for (int k = 1; k <= c1; ++k)
                c[i][j] += a[i][k] * b[k][j];

    cout << "Multiply of 2 matrix: " << endl;
    for (int i = 1; i <= r1; ++i)
    {
        for (int j = 1; j <= c2; ++j)
            cout << c[i][j] << " ";

        cout << endl;
    }

    return 0;
}