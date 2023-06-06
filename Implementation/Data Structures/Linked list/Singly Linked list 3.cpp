
/*
In this code, we will learn about how to delete the node from linked list.
As we know that all the nodes are being created in the heap memory therefore it is mandatory to free the the memory from the heap.
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
    while(count < (position-1))
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
// to delete the 1st node we are storing the address of the 2nd node in the head.
void delete_begin(node* &head)
{
    node* temp = head;
    head = temp -> next;
    delete temp;
}

void delete_end(node* &head, node* &tail)
{
    node* current = head;
    node* previous = NULL;
    while(current -> next != NULL)
    {
        previous = current;
        current = current -> next;
    }

/* when the compiler will come outside the while loop then it will find that the previous pointer is storing the address of last 2nd node.*/
    previous -> next = NULL;
    tail = previous;
    delete current;
}

void delete_node(node* &head, node* &tail,int position)
{
    // if the user wants to delete the 1st node then this if block will work.
    if(position == 1)
    {
        delete_begin(head);
        return;
    }
    // if the user wants to delete the nodes apart from 1st node then below lines will work.
    int count = 1;
    node* previous = NULL;
    node* current = head;
    while(count < position)
    {
        previous = current;
        current = current -> next;
        count++;
    }

    // we are just connecting the previous node with the node which is after the current node.
    previous -> next = current ->next;

    //if we delete the last node the previous node will become the last node therefore we need to update the tail and store the address of previous node into tail.
    if(previous -> next == NULL)
    {
        tail = previous;
    }
    delete current;
}
int main()
{
    node* head = NULL;
    node* tail = NULL;

    insert_end(head,tail,5);                 // LL: 5
    insert_end(head,tail,9);                 // LL: 5 9
    insert_at_anypoint(tail,head,1,2);       // LL: 2 5 9
    insert_at_anypoint(tail,head,4,12);      // LL: 2 5 9 12
    insert_begin(head,tail,13);              // LL: 13 2 5 9 12

    delete_begin(head);                      // LL: 2 5 9 12
    delete_end(head,tail);                   // LL: 2 5 9
    delete_node(head,tail,3);                // LL: 2 5

    print_LL(head);

    return 0;
}
