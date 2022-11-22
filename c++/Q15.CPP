#include<iostream>
#include<cstring>
using namespace std;
class Abc
{
    public:
    char *k[100];
    void string1(char i[10],char j[10])
    {
       *k=strcat(i,j);
    }
    void string1()
    {
        cout<<*k;
    }
};
int main()
{
    char a[10],b[10];
    Abc s1;
    cout<<"enter your first string value:- "<<endl;
    cin>>a;
    cout<<"enter your second string value:- "<<endl;
    cin>>b;
    s1.string1(a,b);
    s1.string1();
    return 0;
}
