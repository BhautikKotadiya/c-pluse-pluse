#include<iostream>
using namespace std;
int main()
{
    int id=987654,pass=123456,i,j,amt;
    cout<<"Enter your ID : ";
    cin>>i;
    cout<<"Enter your pass: ";
    cin>>j;
    if(i==id && j==pass)
    {
        cout<<"Login Successfully"<<endl;
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
        if(i!=id)
        {
            cout<<"Sorry ! Your ID is wrong. ";
        }
        if(j!=pass)
        {
            cout<<"Sorry ! Your pass is wrong. ";
        }
    }
    return 0;
}
