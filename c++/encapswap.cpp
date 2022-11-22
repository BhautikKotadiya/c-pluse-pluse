#include<iostream>
using namespace std;
class demo
{
    int a=10;
    public:
        void test(int i)
        {
            cout<<"your previous a value is: "<<a<<endl;
            a=i;
            cout<<"your new a value is: "<<a;
        }
};
int main()
{
    int i;
    cout<<"enter your value: ";
    cin>>i;
    demo obj;
    obj.test(i);
    return 0;
}