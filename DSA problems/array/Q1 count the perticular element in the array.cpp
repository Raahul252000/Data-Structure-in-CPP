#include<iostream>
using namespace std;

int count_element(int arr[],int size, int ele)
{
    int cnt = 0;
    for(int i=0; i <size; i++)
    {
        if(arr[i] == ele)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int num;
    int arry[] = {1,2,3,4,1,4,1,3,2,5,6,7,5,7,8,4,9,6,11,32,21,19,32,12,33,45,8,0,14,12,11,15,5,12,6,9};
    cout << "This is the array: " << endl;
    int size = sizeof(arry)/sizeof(int);
    for(int i = 0; i <size; i++)
    {
        cout << arry[i] << " ";
    }
    cout << endl;

    cout << "which element you want to count: " << endl;
    cin >> num;
    int result = count_element(arry,size,num);

    cout << num << " repeated " << result << " times." << endl;
    return 0;
}
