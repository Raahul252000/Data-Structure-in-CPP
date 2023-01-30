/*
Implementation of singly linked list:
In this code we are learning how to create a linked list and adding the new node at the beginning and at the end.
*/

#include<iostream>
using namespace std;

//this is node class to create the individual node.
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

//This function will add the node in the beginning.
void insert_begin(node* &head, node* &tail, int data)
{
    // if the linked list is empty, means it does not have any node then this 'if-block' will create a new node make it as a first node.
    if(head == NULL)
    {
        node* new_node = new node(data);
        head = new_node;
        tail = new_node;
    }
    else
    {
        // creating new node and adding that node in the beginning.
        node* new_node = new node(data);
        new_node -> next = head; // we are storing the address of 1st node into the next field new node so that new node will become the 1st node of linked list.
        head = new_node;  // as we know that head always contains the address of 1st node therefore we are storing the address of the new node into the head.
    }

}

// This function will create a new node and add it at the end.
void insert_end(node* &head, node* &tail, int data)
{
    // if the there is no node in linked list, and user wants create 1st node then this 'if-block' will work.
    if(tail == NULL)
    {
        node* new_node = new node(data);
        tail = new_node;
        head = new_node;
    }

    // if linked list is not empty, then this 'else' block will create a new node and add it in the beginning of linked list.
    else
    {
        node* new_node = new node(data);
        tail -> next = new_node;   // we are storing the address of new node into the next field of last node and then the new node will become the last node of linked list.
        tail = new_node;    // new node will be the tail of linked list, therefore the tail will store the address of new node.
    }

}

// This function will traverse the node and print all the element of the node.
void print_ll(node* &head)
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


    //this is the head of the linked list which stores the address of the 1st node.
    node* head = NULL;

    // this is the tail of the linked list which stores the address of the last node.
    node* tail = NULL;
    cout << "address of node 1: " << head << endl;

    // 1nd node
    insert_begin(head,tail,10);

    // 2rd node
    insert_begin(head,tail,15);

    // 3th node
    insert_end(tail,11);

    // 4th node
    insert_end(tail,20);

    print_ll(head);

    return 0;
}
