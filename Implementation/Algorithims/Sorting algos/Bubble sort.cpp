/*
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order.
This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

With every round, the largest element of the array will be placed in last of array.
*/

#include<iostream>
using namespace std;

// Bubble sort
void bubble_sort(int arr[], int sizee)
{
    // This loop is for round 1 to sizee-1
    for(int i = 1; i<sizee; i++)
    {

        //
        for(int j = 0; j < sizee-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

// printing function
void print_array(int arr[],int s)
{
    for(int i = 0; i<s; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int num[] = {5,1,7,6,2,9,12,14,9};
    int s = sizeof(num)/sizeof(int);
    cout << "size: " << s << endl;

    bubble_sort(num,s);
    print_array(num,s);

    return 0;
}
