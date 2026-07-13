#include <iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout << "Enter value of n = ";
    cin >> n;
    for(row=1; row<=n; row++)
    {
        for(col=n; col>row; col--)
        {
            cout << "  ";
        }
        for(col=1; col<(row*2); col++)
        {
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}