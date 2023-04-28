#include <iostream>
using namespace std;
/*
INLINE FUNCTIONS IN C++
-----------------------
- Inline functions are used to reduce the function call. When one function is being called multiply times in the program it increases the execution time, so inline function is used to reduce time and increase program efficiency.

DEFAULT ARGUMENTS IN C++
------------------------
- Default arguments are those values which are used by the function if we don’t input our value.
- It is recommended to write default arguments after the other arguments OR Right most side.

*/
inline int product(int a, int b){
    return a * b;
}

float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor; 
}

int main()
{
    int a, b;
    cout << "Enter the values of a and b: ";
    cin >> a >> b;
    cout << "The product of a and b is: "<<product(a,b);

    int money = 100000;
    
    cout<<"\n If you have "<<money<< " RS in your bank account, you will receive "<<moneyReceived(money)<<"Rs after 1 year"; 

    cout<<"\n For VIP, If you have "<<money<< " RS in your bank account, you will receive "<<moneyReceived(money,1.10)<<"Rs after 1 year"; 
    return 0;
}