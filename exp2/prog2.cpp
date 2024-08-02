/*
Insertion at end of array
*/

#include <iostream>

using namespace std;
int main()
{
    int arr[] = {1};
    int n = 0, value = 0;
    cout << "Enter length: ";
    cin >> n;
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter value to insert: ";
    cin >> value;
    arr[n] = value;
    cout << "The array is: " << endl;
    for (int i = 0; i < n + 1; i++)
    {
        cout << i + 1 << ": " << arr[i] << endl;
    }
}