#include<iostream>
using namespace std;
class test
{
    public:
    void demo()
    {
        cout<<"hello bhautik"<<endl;
    }
    test()
    {
        cout<<"hello test"<<endl;
    }
    test(int a,int b)
    {
        cout<<"hii mohit"<<a<<endl;
        cout<<"hii bhautik"<<b<<endl;
    }
};
int main()
{
   test obj;
  // obj.demo();
  test obj2(10,20);
}
