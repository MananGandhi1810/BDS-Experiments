/*
Deleting a particular element in an array
*/
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int element;
    cout << "Enter the element to be deleted: ";
    cin >> element;
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            found = 1;
            for (int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            n--;
            break;
        }
    }
    if (found == 0)
    {
        cout << "Element not found in the array" << endl;
    }
    else
    {
        cout << "Array after deletion: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}