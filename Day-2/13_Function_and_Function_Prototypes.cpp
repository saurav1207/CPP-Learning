#include <iostream>
using namespace std;
/*
FUNCTION PROTOTYPE
-------------------
Syntex : type function_name (arguments);

- we have made a function prototype of the function “sum”, this function prototype will tell the compiler that the function “sum” is declared somewhere in the program which takes two integer parameters and returns an integer value.
- Some examples of acceptable and not acceptable prototypes are shown below:
    int sum(int a, int b); //Acceptable
    int sum(int a, b); // Not Acceptable
    int sum(int, int); //Acceptable

- Formal Parameters :
    The variables which are declared in the function are called a formal parameter. For example, as shown in Code, the variables “a” and “b” are the formal parameters.

- Actual Parameters
    The values which are passed to the function are called actual parameters. For example, as shown in Code, the variables “n1” and “n2” are the actual parameters.
*/

int sum(int a, int b);

void g(void);

int main()
{
    int n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    // n1 and n2 are actual parameters
    int ans = sum(n1, n2);
    cout << "The sum is: " << ans << endl;
    g();

    return 0;
}

int sum(int a, int b)
{
    // Formal Paremeter --> a and b will be taking values from actual parameters n1 and n2
    int c = a + b;
    return c;
}

void g()
{
    cout << "Hello, Good Morning";
}