// Write a C/C++ program of array to perform following (1D Array)
// i.	Find the sum and Average of all the elements in an array.
// ii.	Find highest and lowest element in an array.
// iii.	Write a function that takes an array as input and returns a new array that is the reverse of the original array.
#include <iostream>

using namespace std;

int calculate_sum(int arr[], int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int calculate_highest(int arr[], int len)
{
    int highest = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
        }
    }
    return highest;
}

int calculate_lowest(int arr[], int len)
{
    int lowest = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (arr[i] < lowest)
        {
            lowest = arr[i];
        }
    }
    return lowest;
}

void reverse_arr(int arr[], int len, int *reverse)
{
    for (int i = 0; i < len; i++)
    {
        reverse[i] = arr[len - i - 1];
    }
}

int main()
{
    int arr[] = {};
    double sum = 0, highest, lowest;
    int reverse[] = {};
    double average = 0;
    int len = 0;
    cout << "Enter length of array: ";
    cin >> len;
    for (int i = 0; i < len; i++)
    {
        cout << "Enter element at index " << i << ": ";
        cin >> arr[i];
    }
    sum = calculate_sum(arr, len);
    average = sum / len;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    highest = calculate_highest(arr, len);
    lowest = calculate_lowest(arr, len);
    cout << "Highest: " << highest << endl;
    cout << "Lowest: " << lowest << endl;
    reverse_arr(arr, len, reverse);
    cout << "Reverse: " << endl;
    for (int i = 0; i < len; i++)
    {
        cout << reverse[i] << endl;
    }
    return 0;
}