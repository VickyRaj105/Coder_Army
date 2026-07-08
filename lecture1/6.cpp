//Positive of Negative Number---
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0)
    {
        cout << num << "  " << "Positive Number";
    }
    else if (num < 0)
    { 
        cout << num << "  " << "Negative Number";
    }
    else
    {
        cout << "You entered Zero" ;
    }
}