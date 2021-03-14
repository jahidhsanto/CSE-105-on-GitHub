#include <iostream>
using namespace std;
void swap(int i, int j, int arr[])
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
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

    // Process for Selection Sort.
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
            if (arr[i] > arr[j])
                swap(i, j, arr);
    }

    cout << "The sorted array: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
}