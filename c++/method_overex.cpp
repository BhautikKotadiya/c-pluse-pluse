#include<iostream>
using namespace std;
class king
{
    public:
        void test(int a)
        {
            cout<<"your b date is: "<<a<<endl;
            
        }
        void test(int a,int b)
        {
            cout<<"your sum is :"<<a+b<<endl;
        }
        void test(char b)
        {
            cout<<"enter your name"<<endl;
            cin>>b;
        }
};
int main()
{
    char b;
    king a;
    a.test(21);
    a.test(12,32);
    a.test(b);
    
    return 0;
}