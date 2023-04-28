#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*
        *************CONSTANT*************
        
        int a = 34;
        cout<<"The value of a was: "<<a<<endl;
        a=45;
        cout<<"The value od a is: "<<a<<endl;
    */

    // const int a = 3;
    // cout << "The value of a was: " << a << endl;
    // a=45; //  You will get an error beacause "a" is a constant
    // cout << "The value of a is: " << a << endl;


    // *************MANIPULATORS IN C++*************

    // int a =3, b=78, c=1233;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;

    // With setw we can make our program right justify

    // *************OPERATORS PRECEDENCE*************
    int a = 3, b = 4;
    // int c=a*5+b;
    int c = (a * 5) + b;
    cout << c << endl;

    // Associativity --> it will use when precedence same
    // associativity might be from left to right

    // int d = a*5+b-45+87;
    // int d = (a*5)+b-45+87;
    // int d = ((a*5)+b)-45+87;
    // int d = (((a*5)+b)-45)+87;
    int d = ((((a * 5) + b) - 45) + 87);
    cout << d << endl;

    return 0;
}