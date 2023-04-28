#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {12, 23, 34, 45};

    // Printing Array using while loop
    int i = 0;
    cout << "Printing Array using while loop" << endl;
    while (i < 4)
    {
        cout << "The value of marks " << i << " is: " << marks[i] << endl;
        i++;
    }
    cout << endl;

    // Printing Array using do-while loop
    int j = 0;
    cout << "Printing Array using do-while loop" << endl;
    do
    {
        cout << "The value of marks " << j << " is: " << marks[j] << endl;
        j++;
    } while (j < 4);

    return 0;
}