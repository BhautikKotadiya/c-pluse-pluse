#include<iostream>
using namespace std;
class Student
{
    int a=10;
    public:
        void test()
        {
            cout<<a<<endl;
            cout<<"hello codeline"<<endl;
        }
};
int main()
{
    Student obj;
    obj.test();
    return 0;
}