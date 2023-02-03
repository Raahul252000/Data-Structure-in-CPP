#include<iostream>
using namespace std;

class node
{
public:
    int reg;
    char grade;
    node* next;

    node(int reg, char grade)
    {
        this -> reg = reg;
        this -> grade = grade;
        this -> next = NULL;
    }

};

void insert_begin(node* &head, node* &tail, int reg, char grade)
{
    if( head == NULL)
    {
        node* new_node = new node(reg, grade);
        head = new_node;
        tail = new_node;
    }
    else
    {
        node* new_node = new node(reg, grade);
        new_node -> next = head;
        head = new_node;
    }
}

void insert_end(node* &head, node* &tail, int reg, char grade)
{
    if( tail == NULL)
    {
        node* new_node = new node(reg,grade);
        tail = new_node;
        head = new_node;
    }
    else
    {
        node* new_node = new node(reg, grade);
        tail -> next = new_node;

        tail = new_node;
    }
}

void search_record(node* &head)
{
    node* temp = head;
    int reg;
    cout << "Enter the regi no. to see the record: " << endl;
    cin >> reg;
}
int main()
{


    node* head = NULL;
    node* tail = NULL;
    cout << "How many records do you want to store: ";
    cin >> rec;
    cout << "Enter the registration no and grade of 5 students: " << endl;
    for(int i =1; i<=rec; i++)
    {
        int reg;
        char grade;
        cout << "For Student " << i <<": " << endl;
        cout << "registration: ";
        cin >> reg;
        cout << "grade: ";
        cin >> grade;
        insert_end(head,tail,reg,grade);
    }
    return 0;
}
