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
        head = new_node;
        tail = new_node;
    }
    else
    {
        node* new_node = new node(data);
        new_node -> prev = tail;
        tail -> next = new_node;
        tail = new_node;
    }
}

void delete_head(node* &head)
{
    if(head == NULL)
    {
        cout << "linked list is empty." << endl;
    }
    else
    {
        node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
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
    while(1)
    {
        cout << "Press 1: To Insert a node at the end." << endl;
        cout << "Press 2: To Insert a node at the Begining." << endl;
        cout << "Press 3: To delete the head node." << endl;
        cout << "Press 9: To print Linked list." << endl;
        cout << "Press 10: To exit." << endl;
        int n;
        cin >> n;

        switch(n)
        {
        case 1:
            int data;
            cout << "Enter the data: " << endl;
            cin >> data;
            insert_end(head,tail,data);
            break;
        case 2:
            int x;
            cout << "Enter the data: " << endl;
            cin >> x;
            insert_begin(head,tail,x);
        case 3:
            delete_head(head);
            break;
        case 9:
            print_DLL(head);
            break;
        case 10:
            exit(0);
        }

    }

    return 0;
}
