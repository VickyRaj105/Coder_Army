//one to n pattern printing2--
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
        cout<<"  ";
        //number printing
        for(col=1; col<=row; col++)
        cout<<col<<" ";
        cout<< endl;
    }
}