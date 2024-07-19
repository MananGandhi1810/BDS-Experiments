#include <iostream>

using namespace std;
int main()
{
    int nums[] = {};
    int len = 0;
    cout << "Enter length of array: ";
    cin >> len;
    for (int i = 0; i < len; i++)
    {
        cout << "Enter element at index " << i << ": ";
        cin >> nums[i];
    }
    for (int i = 0; i < len; i++)
    {
        cout << i << ": " << nums[i] << endl;
    }
    return 0;
}