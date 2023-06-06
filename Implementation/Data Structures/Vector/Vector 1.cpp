#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // 1st vector
    vector<int> num1 = {12,34,11,6,19,55};

    // 2nd vector
    vector <int> num2 = {45,21,67,33,23};

    // at(index) function
    cout << num1.at(3) << endl;
    cout << num2.at(3) << endl;

    // push_back(value): this method will append the value at the last of the vector.
    num1.push_back(100);
    num2.push_back(200);

    // inserting the element at the 2nd index
    num1.insert(num1.begin() + 2,44);

    // traversing the num1
    cout << "First array: ";
    for(int num: num1)
    {
        cout << num << " ";
    }

    cout << endl;
    // concatinating both num1 and num2 vectors with the help of insert() method.
    num1.insert(num1.end(),num2.begin(),num2.end());

    // printing num1 after connecting with num2
    cout << "Again printing num1: " << endl;
    for(int x: num1)
    {
        cout << x << " ";
    }
    cout << endl;

    // reverse the num2
    reverse(num2.begin(),num2.end());

    // printing the num2 after the reversing.
    cout << "Array 2: " << endl;
    for(int x: num2)
    {
        cout << x << " ";
    }

    return 0;
}
