#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
// Process for Insertion Sort.
void insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while ((j > 0) && (arr[j - 1] > arr[j]))
        {
            swap(&arr[j - 1], &arr[j]);
            j = j - 1;
        }
    }
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

    // Calling function for sorting.
    insertion_sort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}