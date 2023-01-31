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
    node*
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

    insert_begin(head,tail,5);
    insert_begin(head,tail,4);

    insert_end(head,tail,7);
    insert_end(head,tail,8);

    insert_at_anypoint(head,tail,5,9);
    insert_at_anypoint(head,tail,6,10);

    insert_at_anypoint(head,tail,3,20);
    insert_at_anypoint(head,tail,3,30);
    insert_begin(head,tail,40);
    insert_end(head,tail,50);
    print_DLL(head);

    return 0;
}
