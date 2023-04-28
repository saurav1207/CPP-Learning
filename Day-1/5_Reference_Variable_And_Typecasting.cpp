#include <iostream>
using namespace std;

// Global variable
int c = 34;

int main()
{
    int a, b, c;

    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;
    c = a + b;
    cout << "The sum is: " << c << endl;

    cout << "The global variable c is: " << ::c << endl;

    cout << endl;
    float d = 34.4f;
    long double e = 34.4l;
    // By default our system 34.4 ko double samajhta hai
    cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    cout << "The size of 34.4L is " << sizeof(34.4L) << endl;

    cout << endl;
    cout << "The value of d is: " << d << endl
         << "The value of e is: " << e << endl;

    /*
    *************REFERENCE VARIABLE*************

    Chotu ---> saurya --> saurav

    float x = 455;
    float &y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    Means ek hi variable ko diff-diff variable name se call karna
    */

    /*
    *************TYPECASTING VARIABLE*************

    int i = 45;
    int f = 45.54;

    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of a is "<<(int)f<<endl;
    cout<<"The value of a is "<<int(f)<<endl;

    int v = int(f);

    cout<<"The expression is "<<i+f<<endl;
    cout<<"The expression is "<<i+int(f)<<endl;
    cout<<"The expression is "<<i+(int)f<<endl;

    */

    return 0;
}