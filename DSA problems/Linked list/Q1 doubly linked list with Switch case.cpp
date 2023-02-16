#include<iostream>
using namespace std;

class node
{
public:
    node* prev;
    int data;
    node* next;

    node(int data)
    {
        this -> prev = NULL;
        this -> data = data;
        this -> next = NULL;
    }
};

void insert_begin(node* &head, node* &tail, int data)
{
    if(head == NULL)
    {
        node* new_node = new node(data);
        head = new_node;
        tail = new_node;
    }
    else
    {
        node* new_node = new node(data);
        new_node -> next = head;
        head -> prev = new_node;
        head = new_node;
    }
}

void insert_end(node* &head, node* &tail, int data)
{
    if(tail == NULL)
    {
        node* new_node = new node(data);
        head = NULL;
        tail = NULL;
    }
    else
    {
        node* new_node = new node(data);
        new_node -> prev = tail;
        tail -> next = new_node;
        tail = new_node;
    }
}

void insert_any_pos(node* &head, node* &tail,int pos,int data)
{
    if(pos == 1)
    {
        insert_begin(head,tail,data);
        return;
    }

    int count = 1;
    node* temp = head;

    while(count < (pos-1))
    {
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL)
    {
        insert_end(head,tail,data);
        return;
    }

    node* new_node = new node(data);

    new_node -> next = temp -> next;
    temp -> next -> prev = new_node;
    temp -> next = new_node;
    new_node -> prev = temp;
}

void print_DLL(node* &head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main()
{
    node* head = NULL;
    node* tail = NULL;
    int flag =1;
    while(flag ==1)
    {
        cout << "Press 1: to insert node at begining: " << endl;
        cout << "Press 2: to insert node at end: " << endl;
        cout << "Press 3: to insert node at anypoint: " << endl;
        cout << "Press 4: to print the linked list." << endl;
        cout << "Press 5: Quit" << endl;
        int choice;
        cin >> choice;
        switch(choice)
        {
        case 1:
            cout << "Enter element to insert: ";
            int data1;
            cin >> data1;
            insert_begin(head,tail,data1);
            break;

        case 2:
            cout << "Enter element to insert: ";
            int data;
            cin >> data;
            insert_end(head,tail,data);
            break;

        case 3:
            cout << "Enter element and position: ";
            int data3, pos;
            cin >> data;
            cin >> pos;
            insert_any_pos(head,tail,pos,data3);
            break;

        case 4:
            print_DLL(head);
            break;

        case 5:
            flag++;
            break;

        }
    }
    return 0;
}
