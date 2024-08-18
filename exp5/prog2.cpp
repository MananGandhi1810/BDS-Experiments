/*
Check whether pair of brackets is valid or not
*/
#include <iostream>

using namespace std;

struct elem
{
    char val;
};
int maxstk = 50;
int open_top = -1;
int close_top = -1;
elem open[] = {};
elem close[] = {};

void open_push(char);
char open_pop();
void close_push(char);
char close_pop();

int main()
{
    char brackets[] = {};
    char open_i, close_i;
    cout << "Enter brackets: ";
    cin >> brackets;
    int i = 0;
    while (brackets[i] != '\0')
    {
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        if (brackets[j] == '(' || brackets[j] == '{' || brackets[j] == '[')
        {
            open_push(brackets[j]);
        }
        else if (brackets[j] == ')' || brackets[j] == '}' || brackets[j] == ']')
        {
            close_push(brackets[j]);
        }
    }
    if (open_top == close_top)
    {
        for (int j = 0; j <= open_top; j++)
        {
            open_i = open_pop();
            close_i = close_pop();
            cout << open_i << " " << close_i << endl;
            if (open_i == '(' && close_i != ')')
            {
                cout << "Invalid" << endl;
                return 0;
            }
            else if (open_i == '{' && close_i != '}')
            {
                cout << "Invalid" << endl;
                return 0;
            }
            else if (open_i == '[' && close_i != ']')
            {
                cout << "Invalid" << endl;
                return 0;
            }
        }
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
    return 0;
}

void open_push(char val)
{
    if (open_top < maxstk - 1)
    {
        open_top++;
        open[open_top].val = val;
    }
    else
    {
        cout << "Overflow" << endl;
    }
}

char open_pop()
{
    if (open_top != -1)
    {
        int val = open[open_top].val;
        open_top--;
        return val;
    }
    else
    {
        cout << "Underflow" << endl;
        return '\0';
    }
}

void close_push(char val)
{
    if (close_top < maxstk - 1)
    {
        close_top++;
        close[close_top].val = val;
    }
    else
    {
        cout << "Overflow" << endl;
    }
}

char close_pop()
{
    if (close_top != -1)
    {
        int val = close[close_top].val;
        close_top--;
        return val;
    }
    else
    {
        cout << "Underflow" << endl;
        return '\0';
    }
}
