//6 diamond pattern printing using star---
#include <iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout<<"Enter the input: ";
    cin>>n;
    for(row=1; row<=n; row++)
     {
        //space printing
        for(col=1; col<=n-row; col++)
        cout<<" ";
        //star printing
        for(col=1; col<=row-1; col++)
        cout<<" *";
        cout<<endl;
    }
    for(row=n-1; row>=1; row--)
     {
        //space printing
        for(col=1; col<=n-row; col++)
        cout<<" ";
        //star printing
        for(col=1; col<=row-1; col++)
        cout<<" *";
        cout<<endl;
    }
    return 0;
}