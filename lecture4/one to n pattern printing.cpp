//one to n pattern printing---
#include <iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout<<"Input the number: ";
    cin>>n;
    for(row=1; row<=n; row++)
    {
        //space printing
        for(col=1; col<=n-row; col++)
        cout<< "  ";
        //number printing
        for(col=1; col<=row; col++)
        cout<<row<<" ";

        cout<<endl;
    }
}