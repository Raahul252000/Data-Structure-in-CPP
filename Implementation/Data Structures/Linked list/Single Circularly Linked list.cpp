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

void insert_begin(node* &head,node* &tail, int data)
{
    if(head == NULL)
    {
        node* new_node = new node(data);
        head = new_node;
        tail = head;
    }
    else
    {
        node* new_node = new node(data);
        new_node -> next = head;

    }
}

int main()
{
    node* head = NULL;
    node* tail = NULL;


    return 0;
}
