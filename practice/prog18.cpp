// Bubble Sort
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int arr[] = {10,
                 20,
                 23,
                 2,
                 12,
                 74,
                 29,
                 99,
                 11,
                 22};
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}