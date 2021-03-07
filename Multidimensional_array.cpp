#include <iostream>
using namespace std;

int main()
{
    int D1[100], D2[100][100];

    for (int i = 0; i < 10; i++)
        D1[i] = i + 1;

    cout << "One Dimensional array: " << endl;
    for (int i = 0; i < 10; i++)
        cout << D1[i] << " ";
    cout << endl;

    int a = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            D2[i][j] = ++a;

    cout << "Two Dimensional array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << D2[i][j] << " ";
        cout << endl;
    }

    return 0;
}