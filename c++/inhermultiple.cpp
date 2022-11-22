#include<iostream>
using namespace std;
class A
{
    public:
    int a()
    {
        cout<<"hii bhautik"<<endl;   
        return 0;
    }
};
class B
{
    public:
    int b()
    {
        cout<<"hii mohit"<<endl;
        return 0;
    }
};
class C : public A,public B
{
    public:
    int c()
    {
        cout<<"hiii"<<endl;
        return 0;
    }
};
int main()
{
    C obj;
    obj.a();
    obj.b();
    obj.c();
    return 0;
}
