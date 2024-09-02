#include <iostream>

using namespace std;
void swap(int *, int *);

int main()
{
    int a = 0, b = 1;
    cout << a << " " << b << endl;
    swap(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}