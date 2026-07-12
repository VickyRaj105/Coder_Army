// a to z Pattern Printing---
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for(row=1; row<=26; row++)
    {
        for(col=1; col<=26; col++)
        {
            char name  = 'a'+col-1;
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}