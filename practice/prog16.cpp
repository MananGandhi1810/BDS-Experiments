// Binary Search (Recursive)
#include <iostream>
using namespace std;

int binarySearch(int arr[], int x, int left, int right)
{
    if (left > right)
    {
        return -1;
    }
    int mid = left + (right - left) / 2;
    if (x == arr[mid])
    {
        return mid;
    }
    else if (x < arr[mid])
    {
        return binarySearch(arr, x, left, mid - 1);
    }
    return binarySearch(arr, x, mid + 1, right);
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
    cout << binarySearch(arr, target, 0, sizeof(arr) / sizeof(arr[0])) << endl;
    return 0;
}