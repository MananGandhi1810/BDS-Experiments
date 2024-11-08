#include <iostream>
using namespace std;

void insertion_sort(int[], int);

int main()
{
    int arr[10] = {5, 4, 3, 2, 1, 10, 9, 8, 7, 6};
    insertion_sort(arr, 10);
    return 0;
}

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int val = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > val)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = val;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}