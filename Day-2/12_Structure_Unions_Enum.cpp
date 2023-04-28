#include <iostream>
using namespace std;

//  we have used a keyword “typedef” before struct and after the closing bracket of structure, we have written “ep”. Now we can create structure variables without using the keyword “struct” and name of the struct.

typedef struct employee{
    /* data */
    int eId;      // 4
    char favChar; // 1
    float salary; // 4
} ep;

// UNIONS
/*
- Unions are similar to structures but they provide better memory management then structures

- Unions use shared memory so only 1 variable can be used at a time.

- We can only use 1 variable at a time otherwise the compiler will give us a garbage value

- The compiler chooses the data type which has maximum memory for the allocation.
*/

union money{
    /* data */
    int rice;     // 4
    char car;     // 1
    float pounds; // 4
};

int main()
{
    enum Meal{
        breakfast,
        lunch,
        dinner
    };
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout << m1.car << endl;

    ep saurav;
    // struct employee saurya;
    // struct employee chotu;
    saurav.eId = 1;
    saurav.favChar = 's';
    saurav.salary = 10000;

    cout << "Employee Id: " << saurav.eId << endl;
    cout << "Favarate Character: " << saurav.favChar << endl;
    cout << "Salary: " << saurav.salary << endl;

    return 0;
}