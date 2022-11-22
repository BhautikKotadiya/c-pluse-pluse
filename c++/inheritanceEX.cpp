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
        int i,j;
        void demo(int i,int j)
        {
            i=i+j;
            j=i-j;
            i=i-j;

            cout<<"your first value is: "<<i<<endl;
            cout<<"your second value is: "<<j<<endl;
        }
};
int main()
{
    int i,j;
    B obj;
    cout<<"enter your first value: ";
    cin>>i;
    cout<<"enter your second value: ";
    cin>>j;
    obj.test();
    obj.demo(i,j);
    return 0;
}