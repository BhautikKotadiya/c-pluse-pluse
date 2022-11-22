#include<iostream>
using namespace std;
class A
{
    public:
    virtual void demo(int a,int b)
    {
        cout<<"hii"<<endl;
    }
};
class B : public A
{
    public:
    void demo(int a,int b)
    {
        cout<<a+b<<endl;
    }
};
int main()
{
    B bobj;
    A *aobj=&bobj;
    aobj->demo(20,30);
    return 0;
}