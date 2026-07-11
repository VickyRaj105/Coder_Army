// Print even numbers from  1 to n using  loop---
#include <iostream>
using namespace std;
int main()
{ 
    int num;
    cout << "Enter the numnber: ";
    cin >> num;
    for (int i=1; i<=num; i=i+1)
    {
        if (i%2==0)
        {
            cout << i << " " << endl;
        }
    }
    return 0;
}