/*
In this code we have checked for minimum and maximum element from the array.
*/

#include<iostream>
using namespace std;

void find_max(int arr[],int size)
{
    int max = arr[0];
    for(int i=0; i<size; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "max element is : " << max << endl;
}

void find_min(int arr[],int size)
{
    int min=arr[0];
    for(int i=0;i<size; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "min element is : " << min << endl;
}

int main()
{
    int arry[] = {45,1,3,4,-5,6,19,6,4,5,2,8,9};
    int size = sizeof(arry)/sizeof(int);
    find_max(arry,size);
    find_min(arry,size);
    return 0;
}
