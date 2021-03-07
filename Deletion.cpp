#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many integer you want to input? " << endl;
    cin >> n;

    // variable declaration.
    int arr[n+1], dlp;
    
    // Assign integer sequencly.
    for (int i=0; i<=n; i++)
        arr[i]=i+1;
    
    // Show assigned elements.
    cout << "Your input is: " << endl;
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Input delete position.
    cout << "Enter delete position: ";
    cin >> dlp;

    // 1step backword every element to delete position.
    for (int i=dlp; i<n; i++)
        arr[i-1]=arr[i];

    // Output with insertion element.
    cout << "After deletion " << dlp << " position:" << endl;
    for (int i=0; i<n-1; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
