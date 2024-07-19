#include <iostream>
#include <unordered_map>

using namespace std;
int main()
{
    int nums[] = {};
    int len = 0;
    unordered_map<int, int> frequency;

    cout << "Enter length of array: ";
    cin >> len;
    for (int i = 0; i < len; i++)
    {
        cout << "Enter element at index " << i << ": ";
        cin >> nums[i];
    }
    for (int i = 0; i < len; i++)
    {
        frequency[nums[i]] += 1;
    }
    for (auto x : frequency)
    {
        cout << x.first << ": " << x.second << endl;
    }
    return 0;
}