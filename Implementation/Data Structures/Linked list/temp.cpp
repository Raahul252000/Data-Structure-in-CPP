#include <iostream>
//#include <vector>
#include <algorithm>
//#include<strings.h>
#include<string.h>

using namespace std;

int main() {

    int marks[] = {34,21,56,89,44,10};
    string fname = "Rahul";
    string lname = " Yadav";
    char fruit[20] = {"Apple"};
    char vegi[20] = {"Gobhi"};

    string Fullname = fname + lname;
    cout << Fullname;

    string food = strcat(fruit,vegi);
    cout << food << endl;
    return 0;
}

