// Prime or  not prime no. using loop---
#include <iostream>
using namespace std;
int main()
{
    int i, n;
    {
        cout << "Enter the Number: ";
        cin >> n;
    }
    if (n>2)
    {
        cout <<"Not a Prime number";
        return 0;
    }
    else
    {
        for (i=2; i<n; i++)
        if (n%i==0)
        {
            cout <<"Not a Prime number";
            return 0;
        }
        {
            cout <<"Prime number";
            return 0;
        }
    
    }
    return 0;
}