// Linear Search: we will search any element whether it is present in our array or not.

#include<iostream>
using namespace std;

bool search_ele(int arr[],int size,int key)     // this function will receive the address of array.
{
    for(int i = 0; i <size; i++)
    {
        if(arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {12,11,7,9,34,21,33,22,29,76,45,49};
    int num;
    cout << "Enter the value to search: " << endl;
    cin >> num;
    bool result = search_ele(arr,sizeof(arr)/sizeof(int),num);     // passing base address, size of array and number to find.
    if (result == 1)
    {
        cout << "yes it is present." << endl;
    }
    else if (result == 0)
    {
        cout << "no its not present." << endl;
    }

    return 0;
}
