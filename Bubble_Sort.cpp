#include <iostream>
using namespace std;

void swap(int i, int arr[])
{
    int temp;
    temp = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = temp;
}

int main()
{
    int n;
    cout << "How many integer you want to input? " << endl;
    cin >> n;

    int arr[n + 1];
    cout << "Enter " << n << " integer: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    // Process for Bubble Sort.
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n - 1; i++)
            // Compare between two integers.
            if (arr[i] > arr[i + 1])
            {
                swap(i, arr);
                break;
            }
        break;
    }
    cout << "The sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}