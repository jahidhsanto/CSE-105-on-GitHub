#include <iostream>
using namespace std;
void merge(int arr1[], int arr2[], int n1, int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr3[k] = arr1[j];
        k++;
        j++;
    }
}
int main()
{
    int arr1[50], arr2[50], n1 = 4, n2 = 4, arr3[100];
    cout << "Enter 1st array: ";
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    cout << "Enter 2nd array: ";
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    merge(arr1, arr2, n1, n2, arr3);

    cout << "The sorted array: ";
    for (int i = 0; i < n1 + n2; i++)
        cout << arr3[i] << " ";

    return 0;
}