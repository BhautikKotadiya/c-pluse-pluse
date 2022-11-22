#include<iostream>
using namespace std;
int sum(int a, int b)
{
    int c;
    c=a+b;
    cout<<"your value sum is:-"<<c<<endl;
    return 0;
}
int main()
{
    int a,b,c;
    cout<<"Enter your a value :-";
    cin>>a;
    cout<<"Enter your b value :-";
    cin>>b;
    sum(a,b);
}