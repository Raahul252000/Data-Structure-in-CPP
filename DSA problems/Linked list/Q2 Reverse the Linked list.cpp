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

// Reverse Linked list
void reverse_LL(node* &head,node* &tail)
{
    node* prev = NULL;
    node* current = head;
    node* frwd = NULL;
    tail = head;

    while(current != NULL)
    {
        frwd = current -> next;
        current -> next = prev;
        prev = current;
        current = frwd;
    }
    head = current;
}

void print_LL(node* &head)
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

    insert_begin(head,tail,5);
    insert_end(head,tail,10);
    insert_end(head,tail,15);
    insert_end(head,tail,20);

    print_LL(head);

    cout << "after reversing Linked list: " << endl;
    reverse_LL(head,tail);

    print_LL(head);


}
