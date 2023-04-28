#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Tell me your age: ";
    cin >> age;

    // SELECTION CONTROL STRUCTURE : if-else, if-else-if, if-else ladder
    /*
        if((age<18) && (age>0)){
            cout<<"You cannot come to my party"<<endl;
        }else if(age == 18){
            cout<<"You are a kid and you will get a kid pass to the party"<<endl;
        }else if(age<1){
            cout<<"You are not yet born"<<endl;
        }else{
            cout<<"You can come to the party"<<endl;
        }
    */

    // SELECTION CONTROL STRUCTURE : Switch Case Statements
    switch (age)
    {
    case 18:
        /* code */
        cout << "You are 18" << endl;
        break;

    case 22:
        cout << "You are 22" << endl;
        break;

    case 2:
        cout << "You are 2" << endl;
        break;

    default:
        cout << "No special cases" << endl;
        break;
    }

    cout<<"Done with switch case";
    return 0;
}

/*
C++ CONTROL STRUCTURES
------------------------

1). Sequence Structure
2). Selection Structure
3). Loop Structure

Examples :-
a). if-else statement
b). if-else ladder
c). switch case

*/