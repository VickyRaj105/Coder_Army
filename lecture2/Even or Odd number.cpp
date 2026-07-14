//Even or Odd number---
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 1)
    {
        cout << num << " is an Odd number.";
    }
    else
    {
        cout << num << " is an Even number.";
    }
    return 0;
}