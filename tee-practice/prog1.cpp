#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter n: ";
    cin >> n;
    int arr[n + 1];
    cout << "Enter array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index = 0;
    cout << "Enter index: ";
    cin >> index;
    int num = 0;
    cout << "Enter number to insert: ";
    cin >> num;
    for (int i = n; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = num;
    cout << "Inserted: ";
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}