
/*
In this code we have printed the unique elements from the given array.
To find the unique element, we just have picked every element of the array and counted it if it is repeated more
than once or not. if the element is not repeated more than once then we printed the particular elements.
*/
#include<iostream>
using namespace std;

void find_unique(int arr[],int size)
{
    for(int i=0; i< size; i++)
    {
        int count = 0;
        int temp = arr[i];
        for(int j=0; j<size; j++)
        {
            if(temp == arr[j])
            {
                count++;
            }
        }
        if(count == 1)
        {
            cout << temp << " ";
        }
    }
}
int main()
{
    int ary[] = {1,2,1,7,9,7,3,5,4,3,6,2,1,11,0};
    find_unique(ary, sizeof(ary)/sizeof(int));


    return 0;
}
