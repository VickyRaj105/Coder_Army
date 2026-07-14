//Print "Vicky_Raj" 'n' times using for loop---
#include <iostream>
using namespace std;
int  main()
{
    int n;
    cout << "Enter the number of times to print 'Vicky_Raj': ";
    cin >> n;
    for (int i = 0; i <= n; i=i+1)
    {
        cout << "Vicky_Raj" << endl;
    }
    return 0;
}