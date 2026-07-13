//print a 2 e pattern printing2---
#include <iostream>
using namespace std;
int  main()
{
    int row, col;
    for(row=1; row<=5; row++)
    {
        for(col=5; col>=row; col--)
        {
            char name='a'+5-col;
            cout << name << " ";
        }
        cout << endl;
    }
    return 0;
}