//print 1 to 5 pattern printing2---
#include <iostream>>
using namespace std;
int main()
{
    int row, col;
    for(row=1; row<=5; row++)
    {
        for(col=1; col<=row; col++)
        {
            cout << row <<" ";
        }
        cout << endl;
    }
    return 0;
}