#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums {12,23,4};
    vector<string> names {"prince"};

    // size() method will return the size of the vector
    cout << nums.size() << endl;

    // to add the element at the end of the vector we use push_back() method.
    nums.push_back(25);
    names.push_back("Ravi");

    // we can access the element of the vector by using the index.
    cout << nums[3] << endl;

    // to add element at specific position, we use insert() method.

    // adding element at the first position
    names.insert(names.begin(),"Nitesh");
    names.insert(names.begin(),"Rohit");

    // Adding element at 2nd index
    names.insert(names.begin() + 2, "Simran");

    //Accessing the element of vector using For Each loop
    cout << "Traversing using For Each loop: " << endl;
    for(string element: names)
    {
        cout << element << endl;
    }

    // to check the capacity of vector, we use capacity() method.
    cout << "capacity of names is: "<< names.capacity() << endl;


    // We can delete the specific element by using the erase() method.
    // deleting the last 3rd element
    names.erase(names.end()-3);


    // traversing the element of vector using for loop
    cout << "traversing using for-loop: " <<endl;
    for(int i=0; i<names.size(); i++)
    {
        cout << names[i] << endl;
    }


    return 0;
}
