/*
In this code of DDL, we will learn how to add the functionality of deleting node.
*/

#include<iostream>
using namespace std;

class node
{
public:
    node* previous;
    int data;
    node* next;

    node(int data)
    {
        this -> previous = NULL;
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
        head -> previous = new_node;
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
        tail -> next = new_node;
        tail = new_node;
    }
}

void insert_at_anypoint(node* &head, node* &tail, int position, int data)
{
    if(position == 1)
    {
        insert_begin(head,tail,data);
        return;
    }

    int count =1;
    node* temp = head;
    while(count < position-1)
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
    temp -> next -> previous = new_node;
    temp -> next = new_node;
    new_node -> previous = temp;

}

void delete_begin(node* &head)
{
    node* temp = head;
    temp -> next -> previous = NULL;  // here we are storing NULL in the previous of 2nd node to break the bond.
    head = temp -> next;        // here we are storing the address of the 2nd node in the head.
    temp -> next = NULL;        // storing null in the next of 1st node.
    delete temp;
}

void delete_end(node* &tail)
{
    node* temp = tail;
    tail = temp -> previous;
    temp -> previous -> next = NULL;
    temp -> previous = NULL;

    delete temp;
}

void delete_any_node(node* &head, node* &tail, int position)
{
    if(position == 1)
    {
        delete_begin(head);
        return;
    }

    int count = 1;
    node* temp = head;
    while(count < position)
    {
        temp = temp -> next;
    }

    if(temp -> next = NULL)
    {
        tail = temp -> previous;
        temp -> previous -> next = NULL;
        temp -> previous = NULL;
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
}

int main()
{
    node* head = NULL;
    node* tail = NULL;

    insert_begin(head,tail,7);
    insert_begin(head,tail,8);

    insert_end(head,tail,9);
    insert_end(head,tail,10);

    insert_at_anypoint(head,tail,5,11);
    cout << "this is tail: " << tail -> data << endl;


    //delete_begin(head);
   // delete_end(tail);
    delete_any_node(head,tail,1);


    print_DLL(head);

    return 0;
}
