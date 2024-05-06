#include <iostream>
using namespace std;
int main()
{
    int i,n; 
    cout<<"ingrese un numero positivo";
    cin>>n;

    if(n>0)
    {
        while (i<n)
        {
            cout <<i<<"\n";
            i=i+2;

        }
    }
    else
    {
        cout<<"error debe ser positivo";
    }
    return 0;
}