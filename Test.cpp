#include <iostream>
using namespace std;
int main()
// arr - The list of data items
// n – Total no. of items in arr
// src – Item to be searched
{
    int n;
    cout << "How many integer you want to input? " << endl;
    cin >> n;

    int arr[n + 1], src, loc = 0, beg = 1, end = n, mid;

    cout << "Enter " << n << " integer: ";
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];

    cout << "Enter search item: ";
    cin >> src;

    for (beg = 1, end = n; beg <= end;)
    {
        mid = (beg + end) / 2;

        if (src < arr[mid])
            end = mid - 1;

        else if (src > arr[mid])
            beg = mid + 1;

        else if (src == arr[mid])
        {
            loc = mid;
            cout << loc;
            break;
        }
    }
    if (loc == 0)
        cout << "Item is not in List.";
}