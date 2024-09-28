/*
Write a program to manage a simple inventory system for store. Each inventory item should have a name, quantity and price. Implement hthis system using a simgly linked list.
Write a program that allows users to add new items to the inventory, update the quantity of existing items, display the current inventory and remove items from the inventory.
*/
#include <iostream>
using namespace std;

struct Item
{
    int id;
    string name;
    int quantity;
    float price;
    Item *next;
};

Item *head;
int n = 0;

void newItem(int, string, float);
void deleteItem(int);
void updateItem(int, int, string, float);
void display();

int main()
{
    int choice, quantity, id;
    float price;
    string name;
    bool running = true;
    while (running)
    {
        cout << "1. New Item" << endl
             << "2. Delete Item" << endl
             << "3. Update Item" << endl
             << "4. Display Items" << endl
             << "Enter Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter price: ";
            cin >> price;
            cout << "Enter quantity: ";
            cin >> quantity;
            newItem(quantity, name, price);
            break;

        case 2:
            cout << "Enter id of element to delete: ";
            cin >> id;
            deleteItem(id);
            break;

        case 3:
            cout << "Enter id of element to update: ";
            cin >> id;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter price: ";
            cin >> price;
            cout << "Enter quantity: ";
            cin >> quantity;
            updateItem(id, quantity, name, price);
            break;

        case 4:
            display();
            break;

        default:
            break;
        }
    }
}

void newItem(int quantity, string name, float price)
{
    Item *temp = new Item();
    temp->id = ++n;
    temp->name = name;
    temp->price = price;
    temp->quantity = quantity;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Item *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = temp;
    }
    cout << "Item Added succesfully" << endl
         << endl;
}

void deleteItem(int id)
{
    Item *current = head;
    bool found = false;
    while (current->next != NULL)
    {
        if (current->id == id)
        {
            found = true;
            break;
        }
        current = current->next;
    }
    if (!found)
    {
        cout << "Item with id not found" << endl
             << endl;
        return;
    }
    current->next = current->next->next;
    cout << "Item removed succesfully" << endl
         << endl;
}

void updateItem(int id, int quantity, string name, float price)
{
    Item *current = head;
    bool found = false;
    while (current->next != NULL)
    {
        if (current->id == id)
        {
            found = true;
            break;
        }
        current = current->next;
    }
    if (!found)
    {
        cout << "Item with id not found" << endl
             << endl;
        return;
    }
    current->name = name;
    current->price = price;
    current->quantity = quantity;
    cout << "Item updated succesfully" << endl
         << endl;
}

void display()
{
    if (head == NULL)
    {
        cout << "No items in inventory" << endl
             << endl;
        return;
    }
    Item *current = head;
    while (current != NULL)
    {
        cout << "Id: " << current->id << endl
             << "Name: " << current->name << endl
             << "Price: " << current->price << endl
             << "Quantity: " << current->quantity << endl;
        current = current->next;
    }
    cout << endl;
}