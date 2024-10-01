// Binary Search
#include <iostream>
using namespace std;

int binarySearch(int arr[], int x)
{
    int left = 0, right = sizeof(arr) / sizeof(arr[0]) - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (x == arr[mid])
        {
            return mid;
        }
        else if (x < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, target;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    cout << "Enter sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter target: ";
    cin >> target;
    cout << binarySearch(arr, target) << endl;
    return 0;
}