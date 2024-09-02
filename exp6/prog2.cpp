// Circular Queue
#include <iostream>
using namespace std;

const int n = 10;
int front = -1, rear = -1;
struct QueueElement
{
  int value;
};
QueueElement queue[n];
void enqueue(int);
void dequeue();
void display();

int main()
{
  int choice = 0;
  bool running = true;
  int value;
  while (running)
  {
    cout << endl
         << "1. Insert" << endl
         << "2. Delete" << endl
         << "3. Display" << endl
         << "0. Exit" << endl
         << "Enter choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
      cout << "Enter value: ";
      cin >> value;
      enqueue(value);
      break;

    case 2:
      dequeue();
      break;

    case 3:
      display();
      break;

    case 0:
      running = false;
      break;

    default:
      cout << "Invalid choice" << endl;
      break;
    }
  }
  return 0;
}

void enqueue(int value)
{
  if ((front == 0 && rear == n - 1) || (rear == (front - 1) % (n - 1)))
  {
    cout << "Overflow" << endl;
    return;
  }
  if (front == -1)
  {
    front = 0;
    rear = 0;
  }
  else if (rear == n - 1 && front != 0)
  {
    rear = 0;
  }
  else
  {
    rear++;
  }
  queue[rear].value = value;
}

void dequeue()
{
  if (front == -1)
  {
    cout << "Underflow" << endl;
    return;
  }
  int value = queue[front].value;
  if (front == rear)
  {
    front = -1;
    rear = -1;
  }
  else if (front == n - 1)
  {
    front = 0;
  }
  else
  {
    front++;
  }
  cout << "Deleted value: " << value << endl;
}

void display()
{
  if (front - rear < 0 || (front == -1 && rear == -1))
  {
    cout << "Empty" << endl;
    return;
  }
  for (int i = front; i <= rear; i++)
  {
    cout << queue[i].value << "\t";
  }
  cout << endl;
}