/*
Properties of XOR (^) Operator:
1. a^a = 0     same operands
2. 0^a = a     when we perform xor operation between any number and zero then it will return that number only.

*/

#include<iostream>
using namespace std;

int find_unique(int arr[], int size)
{
    int ans = 0;
    for(int i=0; i<size; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[5] = {4,2,1,2,4};
    int arr2[8] = {4,4,2,2,10,3,2,3};

    cout << find_unique(arr,sizeof(arr)/sizeof(int)) << endl;
    cout << find_unique(arr2,sizeof(arr2)/sizeof(int))<< endl;


    return 0;
}
