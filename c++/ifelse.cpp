#include<iostream>
using namespace std;
int main()
{
    int i,j=0,k=0,a;
    cout<<"enter your number:-"<<endl;
    cin>>a;
    for ( i = 1; i <= a; i++)
    {
        if(i%2==0)
        {
            k++;
        }
        else if(i%2==1)
        {
            j++;
        }
        else
        {
            cout<<"not valid."<<endl;
        }
    }
    cout<<"even number is:-"<<k<<endl;
    cout<<"odd number is:-"<<j<<endl;
}