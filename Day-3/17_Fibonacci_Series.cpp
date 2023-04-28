#include<iostream>
using namespace std;

int fib(int n){
    if(n==0 || n==1){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}
/*
fib(5)
fib(4) + fib(3)
fib(3) + fib(2) + fib(2) + fib(1)
*/

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    cout<<"The term in fibonacci sequence of "<<a<< " is "<<fib(a)<<endl;
    return 0;
}