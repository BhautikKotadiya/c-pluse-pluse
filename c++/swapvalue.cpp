#include<iostream>
using namespace std;
class demo1
{
    public:
    int test(int i,int j)
    {
        i=i+j;
        j=i-j;
        i=i-j;

        cout<<"your first value is: "<<i<<endl;
        cout<<"your second value is: "<<j<<endl;
        return 0;
    }
};
int main()
{
    int i,j;
    demo1 obj;
    cout<<"enter your first value: ";
    cin>>i;
    cout<<"enter your second value: ";
    cin>>j;
    obj.test(i,j);
    return 0;
}
