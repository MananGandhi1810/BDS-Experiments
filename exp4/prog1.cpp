/*
Basic implementation of a stack
*/
#include <iostream>

using namespace std;
int top = 0, maxstk, stack[] = {};
void push(int);
int pop();
int peek();
void display();

int main()
{
    cout << "Enter maxstk: ";
    cin >> maxstk;
    int number;

input:
    int choice;
    cout << "Enter 0 for exit, 1 for push, 2 for pop, 3 for peek, 4 for display: ";
    cin >> choice;
    switch (choice)
    {
    case 0:
        cout << "Final stack is: " << endl;
        display();
        return 0;

    case 1:
        cout << "Enter number: ";
        cin >> number;
        push(number);
        break;

    case 2:
        number = pop();
        cout << "Popped element: " << number << endl;
        break;

    case 3:
        number = peek();
        cout << "Element at top: " << number << endl;
        break;

    case 4:
        display();
        break;

    default:
        break;
    }
    goto input;
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

int peek()
{
    if (top != 0)
    {
        return stack[top];
    }
    else
    {
        cout << "Underflow" << endl;
        return -1;
    }
}

void display()
{
    for (int i = 1; i <= top; i++)
    {
        cout << stack[i] << " ";
    }
    cout << endl;
}