// Stack using structures
#include <iostream>

using namespace std;

const int n = 100;
int top = -1;
struct StackElement
{
    int value;
};
StackElement stack[n];

bool push(int);
int pop();
int peek();
void display();

int main()
{
    int choice;
    bool running = true;
    int value;
    while (running)
    {
        cout << endl
             << "0. Exit" << endl
             << "1. Push" << endl
             << "2. Pop" << endl
             << "3. Peek" << endl
             << "4. Display" << endl
             << "Enter a choice: ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            running = false;
            break;

        case 1:
            value;
            cout << "Enter value: ";
            cin >> value;
            bool complete;
            complete = push(value);
            if (!complete)
            {
                cout << "Overflow" << endl;
            }
            else
            {
                cout << "Pushed into stack" << endl;
            }
            break;

        case 2:
            value = pop();
            if (value != -1)
            {
                cout << "Value: " << value << endl;
            }
            else
            {
                cout << "Underflow" << endl;
            }
            break;

        case 3:
            value = peek();
            cout << "Value on top: " << value << endl;
            break;

        case 4:
            display();
            break;

        default:
            cout << "Invalid Input";
            break;
        }
    }
}

bool push(int value)
{
    if (top >= n - 1)
    {
        return false;
    }
    StackElement element;
    element.value = value;
    stack[++top] = element;
    return true;
}

int pop()
{
    if (top == -1)
    {
        return -1;
    }
    return stack[top--].value;
}

int peek()
{
    if (top == -1)
    {
        return -1;
    }
    return stack[top].value;
}

void display()
{
    cout << "Elements of stack: ";
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i].value << "  ";
    }
    cout << endl;
}