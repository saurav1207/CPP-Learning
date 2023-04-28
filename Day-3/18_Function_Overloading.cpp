#include <iostream>
using namespace std;

/*
FUNCTION OVERLOADING IN C++
-----------------------------
- Function overloading is a process to make more than one function with the same name but different parameters, numbers, or sequence.

- The main thing to note here is that the name of the function can be the same but the "data type" and the sequence of arguments need to be different
*/

// int add(float a, int b){
int add(int a, int b){
    cout << "\nUsing function with 2 arguments" << endl;
    return a + b;
}
int add(int a, int b, int c){
    cout << "\nUsing function with 3 arguments" << endl;
    return a + b + c;
}

// Calculate the volume of a Cylinder
int volume(double r, int h){
    return (3.14 * r * r * h);
}

// Calculate the volume of a Cube
int volume(int a){
    return (a * a * a);
}

// Rectancle Box
int volume(int l, int b, int h){
    return (l * b * h);
}

int main()
{

    cout << "The sum of 3 and 6 is: " << add(3, 6) << endl;
    cout << "The sum of 3, 6 and 7 is: " << add(3, 6, 7) << endl;
    cout<<endl;
    cout << "The volume of cylinder of radius 3 and height 6 is: " << volume(3, 6) << endl;
    cout << "The volume of cube of side 3 is: " << volume(3) << endl;
    cout << "The volume of cuboid of 3,7 and 6 is: " << volume(3, 7, 6) << endl;
    return 0;
}