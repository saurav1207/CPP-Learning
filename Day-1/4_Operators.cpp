#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout << "*************Operators in C++*************" << endl;

    // Arithmetic Operators
    cout << "Following are the Arithmetic Operators in C++:- " << endl;
    cout << "The value of a + b is: " << a + b << endl;
    cout << "The value of a - b is: " << a - b << endl;
    cout << "The value of a * b is: " << a * b << endl;
    cout << "The value of a / b is: " << a / b << endl; // Here when two integer value do operationn than result also come in integer
    cout << "The value of a % b is: " << a % b << endl;
    cout << "The value of a++ is: " << a++ << endl;
    cout << "The value of a-- is: " << a-- << endl;
    cout << "The value of ++a is: " << ++a << endl;
    cout << "The value of --a is: " << --a << endl;
    cout << endl;

    // Assignment Operator --> Used to assign values to varaibles

    // Comparison Operator --> It will help in compare two operator
    cout << endl;
    cout << "Following are the Comparison Operators in C++:- " << endl;
    cout << "The value of a == b is: " << (a == b) << endl;
    cout << "The value of a != b is: " << (a != b) << endl;
    cout << "The value of a >= b is: " << (a >= b) << endl;
    cout << "The value of a <= b is: " << (a <= b) << endl;
    cout << "The value of a > b is: " << (a > b) << endl;
    cout << "The value of a < b is: " << (a < b) << endl;
    cout << endl;

    // Logical Operators
    cout << endl;
    cout << "Following are the Logical perators in C++:- " << endl;

    cout << "The value of this logical 'AND' operator is: ((a == b) && (a < b)) is: " << ((a == b) && (a < b)) << endl;

    cout << "The value of this logical 'OR' operator is: ((a == b) || (a < b)) is: " << ((a == b) || (a < b)) << endl;

    cout << "The value of this logical 'NOT' operator is: (!(a == b)) is: " << (!(a == b)) << endl;

    return 0;
}