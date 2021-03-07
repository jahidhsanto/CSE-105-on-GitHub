//Linear Search
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many integer you want to input? " << endl;
    cin >> n;

    int arr[n + 1], src, location = 0;
    cout << "Enter " << n << " integer: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Enter search item: ";
    cin >> src;

    cout << "\n\nYou entered: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    // This section if for linear search.
    for (int i = 0; i < n; ++i)
        if (arr[i] == src)
        {
            location = i + 1;
            cout << "Your search item \"" << src << "\" is in " << location << " position in this List." << endl;
            break;
        }
    if (location == 0)
        cout << "Your search item \"" << src << "\" is not in this List.";
    return 0;
}