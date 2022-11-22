#include<iostream>
using namespace std;
class A
{
    public:
    void demo(int a)
    {
        cout<<"your value is: "<<a<<endl;
    }
};
class B : public A
{
    public:
    void demo(int a,int b)
    {
        cout<<"your sum is : "<<a+b<<endl;
    }
};
class C : public B
{
    public:
    void demo(string i)
    {
        cout<<"welcome: "<<i<<endl;
    }
};
int main()
{
    string i;
    C obj;
    cout<<"enter your name: ";
    cin>>i;
    obj.demo(i);
    return 0;
}