#include <iostream>
using namespace std;

int main(){
    // Use of break statement --> Break means loop ko tod do yahi per aur loop ko tod kar bahar nikal jao loop se.
    // for(int i=0; i<40; i++){
    //     /* code */
    //     if(i==2){
    //         break;
    //     }
    //     cout<<i<<" ";
    // }

    // Use of continue statement --> Continue means abhi jo iteration hai usko bas yahi per rok do alge iteration per chale jao.
    for (int i = 0; i < 40; i++){
        /* code */
        if (i == 2){
            continue;
        }
        cout << i << " ";
    }
    return 0;
}