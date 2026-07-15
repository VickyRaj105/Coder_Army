//2 one to n pyramid pattern printing---
#include <iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout<<"Enter the inpur: ";
    cin>>n;
    for(row=1; row<=n; row++)
    {
        //space printing
        for(col=1; col<=n-row; col++)
        cout<<"  ";
        //1 to row printing
        for(col=1; col<=row; col++)
        {
            cout<<col<<" ";
        }
         //row to 1 printing
        for(col=row-1; col>=1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}