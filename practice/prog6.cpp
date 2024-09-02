// Valid Parenthesis
#include <iostream>

using namespace std;

const int n = 100;
int top = -1;
char stack[n];

bool push(char);
char pop();

int main()
{
    string str;
    cout << "Enter brackets: ";
    cin >> str;
    int i = 0;
    bool valid = true;
    while (str[i] != '\0')
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            push(str[i]);
        }
        else
        {
            char val = pop();
            if (!((str[i] == ')' && val == '(') || (str[i] == ']' && val == '[') || (str[i] == '}' && val == '{')))
            {
                valid = false;
                break;
            }
        }
        i++;
    }
    if (!valid || top != -1)
    {
        cout << "Invalid" << endl;
    }
    else
    {
        cout << "Valid" << endl;
    }
    return 0;
}

bool push(char value)
{
    if (top >= n - 1)
    {
        return false;
    }
    stack[++top] = value;
    return true;
}

char pop()
{
    if (top == -1)
    {
        return '\0';
    }
    return stack[top--];
}