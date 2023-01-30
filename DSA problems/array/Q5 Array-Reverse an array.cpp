//Reverse the array.


#include<iostream>
using namespace std;

// This function will print the array;
void print_array(int arr[], int siz)
{
    for(int i =0; i < siz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// This function will Reverse the array.
void reverse_array(int arr[], int siz)
{
    int start =0;
    int end = siz-1;

    while(start <= end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;

    }

}

int main()
{
    int arr1[6] = {2,5,1,6,8,7};   // Even size array: in this case start and end will never get equal, therefore when start gets greater than end, we need to stop the swapping
    int arr2[5] = {15,8,4,12,9};   // Odd size array: in this case start and end will equal and when they will become equal, we need to stop the swapping.

    cout << "Array before reversing: " << endl;
    print_array(arr1,sizeof(arr1)/sizeof(int));

    reverse_array(arr1,sizeof(arr1)/sizeof(int));

    cout << "Array after reversing: " << endl;
    print_array(arr1,sizeof(arr1)/sizeof(int));

    cout << "Array before swapping: " << endl;
    print_array(arr2,sizeof(arr2)/sizeof(int));

    reverse_array(arr2,sizeof(arr2)/sizeof(int));

    cout << "Array after swapping: " << endl;
    print_array(arr2,sizeof(arr2)/sizeof(int));
    return 0;
}
