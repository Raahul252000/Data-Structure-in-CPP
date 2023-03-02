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
        tail -> next = new_node;
        new_node -> prev = tail;
        tail = new_node;
    }
}

void insert_at_anypoint(node* &head, node* &tail, int pos, int data)
{
    if(pos == 1)
    {
        insert_begin(head,tail,data);
        return;
    }

    int cnt = 1;
    node* temp = head;

    while(cnt < pos)
    {
        temp = temp -> next;
        cnt++;
    }

    if(temp == NULL)
    {
        insert_end(head,tail,data);
        return;
    }

    node* new_node = new node(data);

    temp -> prev -> next = new_node;
    new_node -> prev = temp -> prev;
    new_node -> next = temp;
    temp -> prev = new_node;
}

void delete_begin(node* &head)
{
    if(head == NULL)
    {
        cout << "Linked list underflow" << endl;
        return;
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

void delete_end(node* &tail)
{
    if(tail == NULL)
    {
        cout << "Linked list underflow" << endl;
        return;
    }
    else
    {
        node* temp = tail;
        temp -> prev -> next = NULL;
        tail = temp -> prev;
        temp -> prev = NULL;
        delete temp;
    }
}

void delete_any_node(node* &head, node* &tail,int pos)
{
    if(pos == 1)
    {
        delete_begin(head);
        return;
    }

    int cnt = 1;
    node* temp = head;

    while(cnt < pos)
    {
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL)
    {
        delete_end(tail);
        return;
    }

    temp -> prev -> next = temp -> next;
    temp -> next -> prev = temp -> prev;
    temp -> prev = NULL;
    temp -> next = NULL;
    delete temp;

}

// Reverse the linked list


void print_DLL(node* &head)
{
    if(head == NULL)
    {
        cout << "Linked list is empty" << endl;
        return;
    }

    node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> data <<" ";
        temp = temp -> next;
    }
}

int main()
{
    node* head = NULL;
    node* tail = NULL;

    insert_begin(head,tail,25);
    insert_begin(head,tail,50);

    insert_end(head,tail,75);
    insert_end(head,tail,100);

    insert_at_anypoint(head,tail,3,200);
    insert_at_anypoint(head,tail,2,250);

    print_DLL(head);
}
