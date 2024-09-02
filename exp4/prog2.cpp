#include <iostream>

using namespace std;
int top = 0, maxstk, stack[] = {};
void push(int);
int pop();

int main()
{
    cout << "Enter maxstk: ";
    cin >> maxstk;
    int number;

    for (int i = 0; i < maxstk; i++)
    {
        int emp;
        cout << "Enter employee number: ";
        cin >> emp;
        push(emp);
    }

    for (int i = 0; i < maxstk; i++)
    {
        int emp = pop();
        cout << "Emp: " << emp << endl;
    }
    return 0;
}

void push(int n)
{
    if (top <= maxstk - 1)
    {
        stack[++top] = n;
    }
    else
    {
        cout << "Overflow" << endl;
    }
}

int pop()
{
    if (top != 0)
    {
        return stack[top--];
    }
    else
    {
        cout << "Underflow" << endl;
        return -1;
    }
}