/*
Pair of brackets
*/
#include <iostream>

using namespace std;
int open_top = 0, close_top = 0, maxstk;
char open[] = {}, close[] = {};
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
    maxstk = i / 2;
    i = 0;
    while (i < maxstk * 2)
    {
        if (brackets[i] == '{' || brackets[i] == '(' || brackets[i] == '[')
        {
            open_push(brackets[i]);
        }
        else
        {
            close_push(brackets[i]);
        }
        i++;
    }
    bool invalid = false;
    for (int i = 0; i < maxstk; i++)
    {
        open_i = open_pop();
        close_i = close_pop();
        cout << open_i << "  " << close_i << endl;
        if (!((open_i == '(' && close_i == ')') || (open_i == '[' && close_i == ']') || (open_i == '{' && close_i == '}')))
        {
            invalid = true;
        }
    }
    if (invalid)
    {
        cout << "Invalid brackets";
    }
    else
    {
        cout << "Valid";
    }
    cout << endl;
    return 0;
}

void open_push(char c)
{
    if (open_top <= maxstk - 1)
    {
        open[++open_top] = c;
    }
    else
    {
        cout << "Overflow" << endl;
    }
}

char open_pop()
{
    if (open_top != 0)
    {
        return open[open_top--];
    }
    else
    {
        cout << "Underflow" << endl;
        return '\0';
    }
}

void close_push(char c)
{
    if (close_top <= maxstk - 1)
    {
        close[++close_top] = c;
    }
    else
    {
        cout << "Overflow" << endl;
    }
}

char close_pop()
{
    if (close_top != 0)
    {
        return close[close_top--];
    }
    else
    {
        cout << "Underflow" << endl;
        return '\0';
    }
}