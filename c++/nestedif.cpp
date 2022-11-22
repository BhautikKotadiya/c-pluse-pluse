#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter your A number:- "<<endl;
    cin>>a;
    cout<<"Enter your B number:- "<<endl;
    cin>>b;
    cout<<"Enter your C number:- "<<endl;
    cin>>c;
    cout<<"Enter your D number:- "<<endl;
    cin>>d;
    if(a<b)
    {
        if(b<c)
        {
            if(c<d)
            {
                cout<<"D is max"<<endl;
            }
            else
            {
                cout<<"C is max"<<endl;
            }
        }
        else
        {
            if(b<d)
            {
                cout<<"D is max"<<endl;
            }
            else
            {
                cout<<"B si max"<<endl;
            }
        }
    }
    else
    {
        if(a<c)
        {  
            cout<<"C is max"<<endl;
            if(a<d)
            {
                cout<<"D is max"<<endl;
            }
            else
            {
                cout<<"A is max"<<endl;
            }
        }
        else
        {
            cout<<"C is max"<<endl;
        }
    }
    
}