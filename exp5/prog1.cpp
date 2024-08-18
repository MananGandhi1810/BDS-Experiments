/*
Implement the ADT of a stack using structures
*/
#include <iostream>

using namespace std;

struct elem
{
    int val;
};

void push(int);
int pop();
int peek();
void display();

int maxstk = 50;
int top = -1;
elem stack[] = {};

int main()
{
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

void push(int val)
{
    if (top < maxstk - 1)
    {
        top++;
        stack[top].val = val;
    }
    else
    {
        cout << "Overflow" << endl;
    }
}

int pop()
{
    if (top != -1)
    {
        int val = stack[top].val;
        top--;
        return val;
    }
    else
    {
        cout << "Underflow" << endl;
        return -1;
    }
}

int peek()
{
    if (top != -1)
    {
        return stack[top].val;
    }
    else
    {
        cout << "Underflow" << endl;
        return -1;
    }
}

void display()
{
    for (int i = 0; i <= top; i++)
    {
        cout << stack[i].val << "\t";
    }
    cout << endl;
}