/*
This is the previous code with the functionality to add the new node at the end and at the beginning.
But in this code we are adding more functionality to add the new node at any given point in the linked list.
*/
#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int data)
    {
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
        head = new_node;
    }

}

void insert_end(node* &head, node* &tail, int data)
{
    if(tail == NULL)
    {
        node* new_node =new node(data);
        tail = new_node;
        head = new_node;
    }
    else
    {
        node* new_node = new node(data);
        tail -> next = new_node;
        tail = new_node;
    }
}

void insert_at_anypoint(node* &tail, node* &head, int position, int data)
{
    // if the user will say we wants to add the new node at 1st position.
    if(position == 1)
    {
        insert_begin(head,tail,data);
        return;
    }

    // if the user wants to add the new node in the middle at any position.
    int count = 1;
    node* temp = head;
    while(count < (position-1))    // here we have done (position - 1) because if we want to add the new node at 3rd position then we need to traverse up to 2nd node only.
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
    temp -> next  = new_node;

}

void print_LL(node* &head)
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

    insert_begin(head,tail,3);
    insert_end(head,tail,5);
    insert_at_anypoint(tail,head,1,7);
    insert_at_anypoint(tail,head,4,8),

    print_LL(head);

    return 0;
}
