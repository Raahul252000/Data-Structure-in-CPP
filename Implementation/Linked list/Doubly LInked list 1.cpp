/*
In this code, i have implemented the Doubly linked list, in doubly linked list basically the node contains 3 fields called 'previous', 'data' and 'next'.
And in this code we will see how to add elements:
                                            1. at beginning.
                                            2. at end.
                                            3. anywhere in the middle of head and tail.
*/

#include<iostream>
using namespace std;

class node
{
public:
    node* previous;
    int data;
    node* next;

// constructor
    node(int data)
    {
        this -> previous = NULL;
        this -> data = data;
        this -> next = NULL;
    }
};

void insert_begin(node* &head,node* &tail,int data)
{
    // if there is no first node then this 'if-block' will create the 1st node of the linked list.

    if(head == NULL)
    {
        node* new_node = new node(data);
        head = new_node;   //if it is 1st node then we need to update the head and the tail as well.
        tail = new_node;
    }
    else
    {
        node* new_node = new node(data);
        new_node -> next = head;           // here we are storing the address of 1st node in the next of new_node so it will be added in front of 1st node.
        head -> previous = new_node;       // here we are storing the address of new_node into the previous of 1st node.
        head = new_node;               // now as the new_node has become the 1st node therefore we need to update the head.
    }
}

void insert_end(node* &head, node* &tail, int data)
{
    if(tail == NULL)
    {
        node* new_node = new node(data);
        head = new_node;   //if it is 1st node then we need to update the head and the tail as well.
        tail = new_node;
    }
    else
    {
        node* new_node = new node(data);
        tail -> next = new_node;            // here we are storing the address of new_node into the next of last node.
        new_node -> previous = tail;        // here we are storing the address of last node into the previous of new_node.
        tail = new_node;                    // as we know that new_node has become the last node therefore we need to update the tail.
    }
}

void insert_at_anypoint(node* &head, node* &tail, int position, int data)
{
    // if the user will give the position 1 then it means that user wants to add the new_node in the beginning.
    if(position == 1)
    {
        insert_begin(head,tail,data);
        return;
    }
    // if the user will give the position apart from 1 then else block will work.
        node* temp = head;
        int count = 1;
        while(count < (position-1))
        {
            temp = temp -> next;
            count++;
        }
    // if the user wants to add new_node at the end of linked list then this 'if block' will add the node at the last.
        if(temp -> next == NULL)
        {
            insert_end(head,tail,data);
            return;
        }

        node* new_node = new node(data);

        new_node -> next = temp -> next;    // here we are storing the address of next node to new_node into the 'next' field of new_node.
        temp -> next -> previous = new_node;    // here we are storing the address of new_node into the 'previous' field of next node to new_node.
        temp -> next = new_node;   // here we are storing he address of the new_node into the 'next' field of previous node.
        new_node -> previous = temp;  // here we are storing the address of previous node into the 'previous' field of new_node
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

int print_length(node* &head)
{
    int count = 0;
    node* temp = head;
    while(temp != NULL)
    {
        temp = temp -> next;
        count++;
    }
    return count;
}
int main()
{
    node* head = NULL;
    node* tail = NULL;

    insert_at_anypoint(head,tail,1,5);
    insert_end(head,tail,10);
    insert_begin(head,tail,15);
    insert_at_anypoint(head,tail,4,20);

    print_DLL(head);

    return 0;
}
