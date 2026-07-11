// Print Sum of "n" natural numbers using loop---
#include <iostream>
using namespace std;
int main()
{
    int n, i, sum;
    cout << "Enter the value of n: ";
    cin >> n;
    sum = 0;
    for (i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}