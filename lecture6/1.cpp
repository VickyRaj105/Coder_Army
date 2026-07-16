//1 Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO. 
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the temperature: ";
    cin>>n;
    {
        if(n>=70&&n<=90)
        cout<<"yes, temperature is suitable for swimming"<<endl;

        else
        cout<<"no, temperature is not suitable for swimming"<<endl;
    }
    return 0;
}