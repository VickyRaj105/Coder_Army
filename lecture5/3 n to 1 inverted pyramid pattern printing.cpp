//3 n to 1 inverted pyramid pattern printing---
#include <iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout<<"Enter the inpur: ";
    cin>>n;
    for(row=n; row>=1; row--)
    {
        //space printing
        for(col=1; col<=n-row; col++)
        cout<<"  ";
        //star printing
        for(col=1; col<=2*row-1; col++)
        cout<<"* ";
        cout<<endl;
    }
    return 0;
}