//print 1 to 5 pattern printing3---
#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for(row=1; row<=5; row=row+1)
    {
        for(col=row; col>=1; col=col-1)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}