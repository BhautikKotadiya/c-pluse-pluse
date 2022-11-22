#include<iostream>
using namespace std;
class A
{
    public:
    void test()
    {
        cout<<"hello bhautik"<<endl;
    }
};
class B : public A
{
    public:
        void demo()
        {
            cout<<"hii mohit"<<endl;
        }
};
int main()
{
    B obj;
    obj.demo();
    obj.test();
    return 0;
}