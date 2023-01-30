#include<iostream>
using namespace std;

void swap_corres(int arr[], int size)
{
    int i=0,j=1;
    while(i<=size-2 && j <=size)
    {
        swap(arr[i],arr[j]);
        i+=2;
        j+=2;
    }
}

void print_array(int arry[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arry[i] << " ";
    }
    cout << endl;
}

int main()
{
    int even[6] = {1,2,3,4,5,6};
    int odd[5] = {10,20,30,40,50};

    swap_corres(even,sizeof(even)/sizeof(int));      // result should be: 2 1 4 3 6 5
    print_array(even,sizeof(even)/sizeof(int));

    swap_corres(odd,sizeof(odd)/sizeof(int));    // result should be: 20 10 40 30 50
    print_array(odd,sizeof(odd)/sizeof(int));
    return 0;
}
