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
        tail -> next = new_node;
        tail = new_node;
    }

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


int remove_elements(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        int cnt = 0;
        for(int j=0; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                cnt += 1;
                if(cnt >= 2)
                {
                    int k = j;
                    while(k<size)
                    {
                        arr[k] = arr[k+1];
                        k+=1;
                    }
                    size -=1;
                }
            }
        }
    }
    return size;
}

void insert_into_LL(int arr[],int size,node* &head, node* &tail)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]>0)
        {
            insert_end(head,tail,arr[i]);
        }
    }
}


int main()
{
    node* head = NULL;
    node* tail = NULL;


    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int array1[size];
    int array2[size]={0};
    int temp=size;

    //taking value in array
    for(int i=temp-1; i>=0; i--)
    {
        cout << "Enter the " << i+1 << " element: ";
        cin >> array1[i];
    }

    //printing the array
    cout << "This is your given array: " << endl;
    for(int i=0; i<size; i++)
    {
        cout << array1[i] << endl;
    }

    // last element of array
    int last = array1[size-1];
    cout << "last element: " << last << endl;

    for(int i=0; i<size; i++)
    {
        if(array1[i] > last)
        {
            array2[i] = array1[i];
        }
    }

    //printing the 2nd array
    int size2 = sizeof(array2)/sizeof(int);
    int size3 = remove_elements(array2,size2);

    for(int i=0; i<size3; i++)
    {
        cout << array2[i] << endl;
    }

    cout << "your linked list: " << endl;

    insert_into_LL(array2,size3,head,tail);
    print_LL(head);

    return 0;
}
