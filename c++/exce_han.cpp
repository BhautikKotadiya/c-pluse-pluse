#include<iostream>
using namespace std;
int main()
{
    int Pin=123456,amt,i;
    cout<<"Enter your ATM Pin : ";
    cin>>i;
    if(i==Pin)
    {
        try
        {
            cout<<"Enter your amount : ";
            cin>>amt;
            if(amt>0)
            {
                cout<<"Transaction is successfully ";
            }
            else
            {
                throw(amt);
            }
        }
        catch(int amt)
        {
            cout<<"Sorry ! you have entered wrong amount ";
        }
    }
    else
    {
        cout<<"your pin is wrong";
    }
    return 0;
}
