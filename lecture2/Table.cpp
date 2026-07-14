//Print Table using loop---
#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter the number to print table: ";
    cin >> n;
    for (i=1; i<=10*n; i=i+1)
    {
        cout << n << "*" << i << "=" << n*i << endl;
    }
    return 0;
}