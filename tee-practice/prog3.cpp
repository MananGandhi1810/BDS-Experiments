// Stacks
#include <iostream>
using namespace std;

const int n = 10;
int stack[n];
int top = -1;

void push(int);
void pop();
void peek();
void display();

int main()
{
    for (int i = 0; i < 12; i++)
    {
        cout << "Pushing " << i << endl;
        push(i);
    }
    display();
    peek();
    for (int i = 0; i < 12; i++)
    {
        pop();
    }
    return 0;
}

void push(int val)
{
    if (top >= n - 1)
    {
        cout << "Overflow" << endl;
        return;
    }
    stack[++top] = val;
}

void pop()
{
    if (top == -1)
    {
        cout << "Underflow" << endl;
        return;
    }
    cout << "Popped Value: " << stack[top--] << endl;
}

void peek()
{
    if (top == -1)
    {
        cout << "Underflow" << endl;
        return;
    }
    cout << "Value on top: " << stack[top] << endl;

}

void display()
{
    if (top == -1)
    {
        cout << "Underflow" << endl;
        return;
    }
    for (int i = 0; i <= top; i++)
    {
        cout << stack[i] << " ";
    }
    cout << endl;
}