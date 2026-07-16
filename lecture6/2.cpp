//2 Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    {
        if(n%2==0 && n>=0)
        cout<<"yes, the given number is both even and positive number"<<endl;

        else
        cout<<"no, the given number is not an even and positive number"<<endl;
    }
    return 0;
}