#include <iostream>

using namespace std;
int main()
{
    int arr[] = {};
    int len = 0, num = 0;
    cout << "Enter length of array: ";
    cin >> len;
    for (int i = 0; i < len; i++)
    {
        cout << "Enter element at index " << i << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < len; i++)
    {
        num = (num * 10) + arr[i];
    }
    cout << num << endl;
    return 0;
}