// Sorting
#include <iostream>
using namespace std;

void insertion_sort(int[], int);
void selection_sort(int[], int);
void bubble_sort(int[], int);
void display(int[], int);

int main()
{
    int arr1[10] = {
        5,
        3,
        8,
        6,
        0,
        1,
        2,
        4,
        9,
        7,
    };
    int n = 10;
    insertion_sort(arr1, n);
    int arr2[10] = {
        5,
        3,
        8,
        6,
        0,
        1,
        2,
        4,
        9,
        7,
    };
    selection_sort(arr2, n);
    int arr3[10] = {
        5,
        3,
        8,
        6,
        0,
        1,
        2,
        4,
        9,
        7,
    };
    bubble_sort(arr3, n);
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int num = arr[min];
        for (int k = min; k > i; k--)
        {
            arr[k] = arr[k - 1];
        }
        arr[i] = num;
    }
    cout << "Insertion Sort: ";
    display(arr, n);
}

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    cout << "Selection Sort: ";
    display(arr, n);
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
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
    cout << "Bubble Sort: ";
    display(arr, n);
}