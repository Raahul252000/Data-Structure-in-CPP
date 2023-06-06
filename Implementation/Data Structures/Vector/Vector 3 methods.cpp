#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// this method will check the if two vector are equal.
void Isequal(vector<int> x, vector<int> y)
{
    // we can compare two vectors by using '==' operator if they are equal.
    if(x == y)
    {
        cout << "Both vectors are equal" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }
}

void print_array(vector<int> x)
{
    for(int ele:x)
    {
        cout << ele << endl;
    }
}

int main()
{
    vector<int> num1 {1,2,3,4,5};
    vector<int> num2 {1,2,3,4,5};
    vector<int> num3 {12,10,5,3};
    vector<string> names {"Rahul","Prince","Nitesh"};

    Isequal(num1,num2);
    Isequal(num1,num3);

    // to reverse the array we need to include the '#inlcude<algorithm>' file.
    reverse(num1.begin(),num1.end());

    //printing the vector.
    print_array(num1);

    // sort the given array using sort():
    cout << "Sorted the num3 " << endl;
    sort(num3.begin(), num3.end());

    // Copy vector: we can copy all the elements of the vector to the other vector:
    vector<string> names2 = names;

    // Printing the names2 vector:
    for(string ele: names2)
    {
        cout << ele << endl;
    }

    print_array(num3);



    return 0;
}
