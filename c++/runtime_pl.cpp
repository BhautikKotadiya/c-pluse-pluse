#include<iostream>
using namespace std;
class A
{
    public:
    virtual void demo()
    {
        cout<<"hii"<<endl;
    }
};
class B : public A
{
    public:
    void demo()
    {
        cout<<"hello"<<endl;
    }
};
int main()
{
    B bobj;
    A *aobj=&bobj;
    aobj->demo();
    return 0;
}