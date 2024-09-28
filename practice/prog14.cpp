// Music playlist application using doubly linked list
#include <iostream>
using namespace std;

struct Song
{
    int id;
    string name;
    string artist;
    Song *next;
    Song *prev;
};

Song *head = NULL;
Song *tail = head;
Song *playing = NULL;
int len = 0;

void add(string, string);
void remove(int);
void next();
void previous();

int main()
{
    int choice, id;
    string name, artist;
    bool running = true;
    while (running)
    {
        if (playing != NULL)
        {
            cout << "Current Song: " << playing->name << " by " << playing->artist << endl;
        }
        cout << "0. Exit" << endl
             << "1. Add Song" << endl
             << "2. Remove Song" << endl
             << "3. Next Song" << endl
             << "4. Previous Song" << endl
             << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            running = false;
            break;

        case 1:
            cout << "Enter song name: ";
            cin >> name;
            cout << "Enter artist name: ";
            cin >> artist;
            add(name, artist);
            break;

        case 2:
            cout << "Enter song id to remove: ";
            cin >> id;
            remove(id);
            break;

        case 3:
            next();
            break;

        case 4:
            previous();
            break;

        default:
            break;
        }
    }
}

void add(string name, string artist)
{
    Song *newSong = new Song;
    newSong->id = len;
    newSong->name = name;
    newSong->artist = artist;
    newSong->next = NULL;
    newSong->prev = NULL;
    if (head == NULL)
    {
        head = newSong;
        tail = newSong;
        playing = newSong;
    }
    else
    {
        tail->next = newSong;
        newSong->prev = tail;
        tail = newSong;
    }
    cout << "Song added successfully with id " << len << "" << endl;
    len++;
}

void remove(int id)
{
    Song *temp = head;
    if (temp == NULL)
    {
        cout << "Playlist is empty" << endl;
        return;
    }
    while (temp != NULL)
    {
        if (temp->id == id)
        {
            break;
        }
        temp = temp->next;
    }
    if (temp->id == id)
    {
        if (temp->prev != NULL)
        {
            temp->prev->next = temp->next;
        }
        else
        {
            head = temp->next;
        }
        if (temp->next != NULL)
        {
            temp->next->prev = temp->prev;
        }
        else
        {
            tail = temp->prev;
        }
        if (temp == playing)
        {
            playing = temp->next;
        }
        cout << "Song removed successfully!" << endl;
    }
    else
    {
        cout << "Song not found!" << endl;
    }
}

void next()
{
    if (playing->next != NULL)
    {
        playing = playing->next;
        cout << "Playing next song..." << endl;
    }
    else
    {
        cout << "No next song available!" << endl;
    }
}

void previous()
{
    if (playing->prev != NULL)
    {
        playing = playing->prev;
        cout << "Playing previous song..." << endl;
    }
    else
    {
        cout << "No previous song available!" << endl;
    }
}