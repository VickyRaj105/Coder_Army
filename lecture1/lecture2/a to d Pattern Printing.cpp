// a to d Pattern Printing---
#include <iostream>
using namespace std;
int main()
{
    int row;
    char col;
    for(row=1; row<=4; row++)
    {
        for(col='a'; col<='d'; col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}