#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How many integer you want to input? " << endl;
    cin >> n;

    // variable declaration.
    int arr[n + 1], inp, ine;

    // Assign integer sequencly.
    for (int i = 0; i <= n; i++)
        arr[i] = i + 1;

    // Show assigned elements.
    cout << "Your input is: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Input insert position.
    cout << "Enter insert position: ";
    cin >> inp;

    // Input insert element.
    cout << "Enter insert element: ";
    cin >> ine;

    // 1step forword every element to last element.
    for (int i = n; i >= inp; i--)
        arr[i] = arr[i - 1];

    // Assign insertion element to selected position.
    arr[inp - 1] = ine;

    // Output with insertion element.
    cout << "After inserting " << ine << ":" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
