#include<iostream>
#include<string>
using namespace std;

struct Node{
    string data;
    Node *next;
};

void addToplayList(Node *head);
void deleteFromplayList(Node *head);
void displayplayList(Node *head);

int main(){
    bool quit = false;
    int choice;
    Node *head = new Node;
    head->next = NULL;

    while (!quit){
        cout << "1. add to Playlist" << endl
            << "2. delete from Playlist" << endl
            << "3. Display  Playlist" << endl
            << "4. quit" << endl;
        cin >> choice;
        switch(choice){
        case 1: addToplayList(head);
            break;
        case 2: deleteFromplayList(head);
            break;
        case 3: displayplayList(head);
            break;
        case 4: quit = true;
            break;
        default:
            cout << "That is not a valid input, quitting program";
            quit = true;
        }
    }
}

void addToplayList(Node *head){
    bool quit = false;
    string temp;
    Node *current = new Node;
    current->next = NULL;

    while (!quit){

        cout << "Enter song name OR press quit to exit";
        cin>>temp;

        if (temp == "quit"){
            quit = true;
        }
        else{
            current= new Node;
            current -> data = temp;
            current->next=head->next;
            head->next=current;
        }
    }
    return;
}

void deleteFromplayList(Node *head){
    string deletion;
    cout << "Which song do you want to delete from the Playlist? ";
    cin >> deletion;

    Node *prev = head;
    Node *current = head->next;

    while (current)
    {
        if (current->data == deletion){
            prev->next = current->next;
            delete current;
            return;
        }
        prev = current;
        current = current->next;
    }
    if (!current){
        cout << "That song is not in the Playlist" << endl;
    }
}

void displayplayList(Node *head){
    if (!head->next)
    {
        cout << "Nothing is in the Playlist." << endl;
        return;
    }

    Node *current;
    current = head->next;
    while (current)
    {
        cout << current->data << endl;
        current = current->next;
    }
}

