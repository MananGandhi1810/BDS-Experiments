/*
Insertion at specific position in an array
*/

#include <iostream>

using namespace std;
int main()
{
    int arr[] = {1};
    int n = 0, index = 0, value = 0;
    cout << "Enter length: ";
    cin >> n;
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter index to insert: ";
    cin >> index;
    cout << "Enter value to insert: ";
    cin >> value;
    for (int i = n; i >= index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index - 1] = value;
    cout << "The array is: " << endl;
    for (int i = 0; i < n + 1; i++)
    {
        cout << i + 1 << ": " << arr[i] << endl;
    }
}