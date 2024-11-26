#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    cout << "Enter array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index = 0;
    cout << "Enter index: ";
    cin >> index;
    int num = 0;
    for (int i = index; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "Deleted: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}