#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How many integer you want to input? " << endl;
    cin >> n;

    int arr[n + 1], src, beg, end, mid, location = 0;
    cout << "Enter " << n << " integer: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Enter search item: ";
    cin >> src;

    cout << "\n\nYou entered: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    // This section if for binary search.
    for (beg = 0, end = n - 1; beg <= end;)
    {
        mid = (beg + end) / 2;
        if (src < arr[mid])
            end = mid - 1;
        else if (src > arr[mid])
            beg = mid + 1;
        else if (src == arr[mid])
            location = mid + 1;
        cout << "Your search item \"" << src << "\" is in " << location << " position in this List." << endl;
    }
    if (location == 0)
        cout << "Your search item \"" << src << "\" is not in this List.";
    return 0;
}