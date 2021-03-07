#include <iostream>
using namespace std;
int main()
{
    int arr[3], n = 50;

    for (int i = 0; i <= n; i++)
        arr[i] = i + 1;

    for (int i = 0; i <= n; i++)
        cout << arr[i] << " ";
    return 0;
}
