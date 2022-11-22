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
int main()
{
    B obj;
    obj.demo(22,21);
    return 0;
}