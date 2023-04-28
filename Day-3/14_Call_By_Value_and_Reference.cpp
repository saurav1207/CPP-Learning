#include<iostream>
using namespace std;

// Call by value 
int sum(int x, int y){
    int sum=x+y;
    return sum;
}

// This will not swap a and b
// void swap(int x, int y){
//     int temp = x;
//     x=y;
//     y=temp;
// }


// Call by reference using pointers
// void swapPointer(int* x, int* y){
//     int temp = *x;
//     *x=*y;
//     *y=temp;
// }

// Call by reference using C++ reference
void swapReferenceVar(int &x, int &y){
    int temp = x;
    x=y;
    y=temp;
}

int main(){
    int a=4, b=5;
    cout<<"The sum of "<<a<<" and "<<b<<" is: "<<sum(a,b)<<endl;

    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    // swap(a,b); // This will not swap a and b
    // swapPointer(&a,&b); //This wiill swap a and b using pointers reference
    swapReferenceVar(a,b); //This wiill swap a and b using reference variables
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

    return 0;
}