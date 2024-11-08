#include <iostream>
using namespace std;

void bubble_sort(int[], int);

int main()
{
    int arr[10] = {5, 4, 3, 2, 1, 10, 9, 8, 7, 6};
    bubble_sort(arr, 10);
    return 0;
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
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
}