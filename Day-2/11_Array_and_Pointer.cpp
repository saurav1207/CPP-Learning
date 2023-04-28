/*

WHAT ARE ARRAYS IN C++?

- An array is a collection of items of similar type, stored in contiguous memory locations.

- Sometimes, a simple variable is not enough to hold all the data.

- For Example : Lets say we want to store the marks of 2500 students having 2500 different variables for this task is not feasible.

- To solve this problem, we cn define an array with size 2500 that can hold the marks of all students.

- By default indexing in array is from '0'

*/

#include <iostream>
using namespace std;

int main(){
    // Array Example
    int marks[5] = {12, 23, 34, 45, 56};
    int mathMarks[4];

    mathMarks[0] = 78;
    mathMarks[1] = 81;
    mathMarks[2] = 88;
    mathMarks[3] = 98;

    cout << "These are math marks" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    cout << "These are marks" << endl;
    // You can change the value of an array
    marks[2] = 67;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;

    for (int i = 0; i < 5; i++){
        cout << "The value of marks " << i << " is: " << marks[i] << endl;
    }
    cout << endl;

    /*
    C++ POINTERS AND ARRAYS
    ------------------------

    marks --> address of first block

    Pointer Arithmetic --> address new = address current + i * sizeof(data type)

    */

    int *p = marks;
    cout << *(p++) << endl;
    cout << *(++p) << endl;

    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    return 0;
}