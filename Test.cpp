#include <iostream>
using namespace std;
int main()
{
    int n, get = 0;
    cout << "How much money do you have? " << endl;
    cin >> n;

    while (n >= 3)
    {
        n = (n - 3) + 1;
        get += 1;
    }
    cout << "Get = " << get << endl;
    cout << "n= " << n << endl;
}