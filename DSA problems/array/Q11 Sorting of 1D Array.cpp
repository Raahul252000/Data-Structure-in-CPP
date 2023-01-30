/*
Selection sort: Selection sort is a sorting algorithm that selects the smallest element from an unsorted list in
each iteration and places that element at the beginning of the unsorted list.

*/
#include<iostream>
using namespace std;

// this function is for sorting the elements of the array in a order.
void selection_sort_ascend(int arr[],int size)
{
    for(int i=0; i<size;i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i] > arr[j])   // here we will pick smallest number first.
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i]= temp;
            }
        }
    }

    for(int i=0;i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// this function is for sorting the array in descending order.
void selection_sort_descend(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i] < arr[j])    // here we will pick the biggest number first.
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5,2,3,1,4};
    int arr2[] = {25,27,10,24,26,5,7};

    selection_sort_ascend(arr2,sizeof(arr2)/sizeof(int));
    selection_sort_descend(arr2,sizeof(arr2)/sizeof(int));
    return 0;
}
