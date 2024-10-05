// Insertion sort
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {5, 4, 3, 2, 1};
    for (int i = 0; i < n; i++)
    {
        int j = i - 1, key = arr[i];
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    cout << "Result: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}