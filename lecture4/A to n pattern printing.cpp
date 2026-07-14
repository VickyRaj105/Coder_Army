//A to n pattern printing---
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
        //char printing
        for(char name='A'; name<='A'+row-1; name++)
        cout<<name<<" ";
        cout<<endl;
    }
}