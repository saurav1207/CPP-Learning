#include <iostream>
using namespace std;

int main()
{

    // For loop
    /*
    Syntex for for-loop
    ---------------------
    for(initialization; consition; updation){
        loop body (C++ Code)
    }
    */

    for (int i = 0; i < 10; i++){
        cout << i << " ";
    }
    cout << endl;

    

    // while-loop
    /*
    Syntex for while-loop
    ---------------------
    while(condition){
        C++ statements;
    }
    */

    // Printing 1 to 20 using while loop
    int x = 1;
    while (x < 20){
        cout << x << " ";
        x++;
    }
    cout << endl;



    // do-while loop
    /*
    Syntex for while-loop
    ---------------------
    do{
        C++ statement;
    }while(condition);
    */

    // Printing 1 to 30 using while loop
    int y = 1;
    do
    {
        cout << y << " ";
        y++;
    } while (y < 30);
    cout << endl;

    return 0;
}

/*
LOOPS IN C++
--------------
There are three types od loops in c++
1). For loop
2). while loop
3). do-while loop
*/