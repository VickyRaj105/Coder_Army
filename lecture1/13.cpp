// Print all Odd numbers from 1 to n using loop---
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    for (int i=1; i <=num; i=i+1)
    {
        if (i%2 == 1)
        {
            cout << i << " " << endl;
        }
    }
    return 0;
}