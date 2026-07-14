//n star pattern printing---
#include <iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout<<"Input the number: ";
    cin>> n;
    for(row=1; row<=n; row++)
    {
        //space  parinting
        for(col=1; col<=n-row; col++)
        {
            cout<<"  ";
        }
        //star printing
        for(col=1; col<=row; col++)
        {
            cout<< "* ";
        }
        cout<< endl;
    }
}