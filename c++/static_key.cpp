#include<iostream>
using namespace std;
class A
{
    public:
        static const int a=10;
        static void demo()
        {
            cout<<a<<endl;
            cout<<"hello demo";
        }
};
int main()
{
    cout<<A::a<<endl;
    A::demo();
    return 0;
}
