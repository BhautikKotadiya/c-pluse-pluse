#include<iostream>
using namespace std;
class A
{
    public:

        static void demo(string i)
        {
           cout<<"i am "<<i; 
        }
};
int main()
{
    string i;
    cout<<"Enter your name: "<<endl;
    cin>>i;
    A::demo(i);
    return 0;
}