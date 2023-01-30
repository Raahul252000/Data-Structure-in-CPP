/*
we cannot delete the elements from the array but we can shift the elements of array.
so if we want to remove any particular element from the array, we can just shift the next elements from that particular element to left.
*/

#include<iostream>
using namespace std;

void delete_element(int arr[]; int size; int ele)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(arr[i] == ele)
        {
            break;
        }
    }

    while(i < size)
    {
        arr[i] = arr[i+1];
        i++;
    }
    size = size-1;
}

int main()
{
    int size, ele;

    cout << "Enter the size of array: " << endl;
    cin >> size;
    int arr1[size] = {0};

    cout << "Enter the elements of array: " << endl;
    for(int i=0; i<size; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the element to remove from the array:  " << endl;
    cin >> ele;

    delete_element(arr1,size,ele);

    for(int i=0; i<size; i++)
    {
        cout << arr1[i] << " ";
    }

    return 0;
}
