// In this code we have added two 2d array.
#include<iostream>
using namespace std;

int main()
{
    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3] = {{10,20,30},{40,50,60},{70,80,90}};

    for(int row=0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout << (arr1[row][col] + arr2[row][col]) << " ";
        }
        cout << endl;
    }
    return 0;
}
