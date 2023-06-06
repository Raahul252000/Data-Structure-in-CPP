//print the fibonacci series using recursion
//print n natural num using recur
// tower of hanoi

#include<stdio.h>
#include<iostream>
using namespace std;



int main(){

    int fibo(int);
int n;

cout<<"Enter a num ";
cin>>n;


   cout<<fibo(n);

}

int fibo(int n){


/*if(n==0)
    return 0;*/

else if(n==1 || n==2)
        return 1;
     else
        return fibo(n-1)+fibo(n-2);

}
