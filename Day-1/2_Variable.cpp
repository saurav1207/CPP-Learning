#include <iostream>
using namespace std;

int main()
{
    int var = 6;
    cout << "Variable contains: " << var << endl;
    // endl --> it is use for 'line break'
    return 0;
}

/*

*************VARIABLES IN C++*************

1). A variable is a container to hold data
2). Variable can be of various types. Primarily we have these variables types in C++.
    int --> -1, 1, 0, 7, 11, 12 ...
    Flot --> 1.21, 3.77, ...
    Char --> 'a', 'b', 'c', ...
    Double --> 1.21345678, ...
    Boolean --> true or false

*************SYNTEX FOR DECLARING VARIABLES IN C++*************

Data_type Variable_name = Value;

for Ex. 1). int a = 4;
        2). char ch = 'a';


SCOPE
--------
Based on scope, variable can be classified into two types:
1). Local Variables
2). Global Variables

VARIABLE SCOPE
--------------------
1). Scope of a variable id the region in code where the existence of variable is valid

2). Based on scope we have local and global variables in C++

3). Local Variables: Local variables are declared inside the braces of any function and can be accessed only from there

4). Global VAriable: Global variables are declared outside any function and can be accessed from anywhere.

5). Can global and local variable have same name in C++? --> Yes
    Local variable have 'more precidence' than Global variable

C++ DATA TYPES
-----------------
1). Data types define the type of data a variable can hold. for example an integer variable can hold integer data, a character type variable can hold character data etc.

2). Data types in C++ are categorised in three groups:
    a). Built-in
        i). int
        ii). float --> Decimal number of 'Low Precision'
        iii). Char
        iv). Double -->Decimal number of 'High Precision'
        v). Bool
    b). User-defined
        i). Struct
        ii). Union
        iii). Enum
    c). Derived
        i). Array
        ii). Function
        iii). Pointer

RULES TO DECLARE VARIABLE IN C++
--------------------------------

1). Variable name in C++ can range from 1 to 255 characters.

2). All variable name must begin with a "letter" of the alphabet or an "underscope(_)"

3). After the first initial letter, cariable names can also contain letters and numbers.

4). Variables names are case sensitive

5). No space or special character are allowed.

6). You cannot use a C++ keyword(a reserved word) as a variable name.
*/