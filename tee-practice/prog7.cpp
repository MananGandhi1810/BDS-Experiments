// Linear and Binary Search
#include <iostream>
using namespace std;

void linear_search(int arr[], int target, int n)
{
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << target << " found at index " << i << " in " << i << " iterations" << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << target << " does not exist in the array" << endl;
    }
}

void binary_search(int arr[], int target, int n)
{
    int left = 0, right = n - 1;
    bool found = false;
    int count = 0;
    while (left < right)
    {
        count++;
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            cout << target << " found at index " << mid << " in " << count << " iterations" << endl;
            found = true;
            break;
        }
        if (arr[mid] < target)
        {
            left = mid;
        }
        if (arr[mid] > target)
        {
            right = mid;
        }
    }
    if (!found)
    {
        cout << target << " does not exist in the array" << endl;
    }
}

int main()
{
    int arr[10] = {1,
                   2,
                   3,
                   4,
                   5,
                   6,
                   7,
                   8,
                   9,
                   10};
    cout << "The array is: " << endl;
    for (int i = 0; i < 10; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
    linear_search(arr, 7, 10);
    binary_search(arr, 7, 10);
}