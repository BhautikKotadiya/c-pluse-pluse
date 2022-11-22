#include<iostream>
using namespace std;
class A
{
    public:
    int test()
    {
        cout<<"hii codeline "<<endl;
        return 0;
    }
};
class B : public A
{
    public:
    int demo1()
    {
        cout<<"hii bhautik"<<endl;
        return 0;
    }
};
class C : public B
{
    public:
    int demo2()
    {
        cout<<"hii mohit"<<endl;
        return 0;
    }
};
int main()
{
    C obj;
    obj.demo1();
    obj.demo2();
    obj.test();
    return 0;
}