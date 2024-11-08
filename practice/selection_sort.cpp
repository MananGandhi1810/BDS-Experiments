#include <iostream>
using namespace std;

void selection_sort(int[], int);

int main()
{
    int arr[10] = {5, 4, 3, 2, 1, 10, 9, 8, 7, 6};
    selection_sort(arr, 10);
    return 0;
}

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}