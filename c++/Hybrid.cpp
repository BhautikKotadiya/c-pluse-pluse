#include<iostream>
#include<cstring>
using namespace std;
class  a
{
    public:
    int m()
    {
        cout<<"welcome"<<endl;
        return 0;
    }
};
class b : public a
{
    public:
    int n()
    {
        cout<<"hii";
        return 0;
    }
};
class c : public a
{
    public:
    int o()
    {
        cout<<"mohit "<<endl;
        
        return 0;
    }
};
class d : public b,public c
{
    public:
    int p()
    {
        cout<<"bhautik "<<endl;
       
        return 0;
    }
};
int main()
{
    d obj;
    obj.b::m();
    obj.n();
    obj.o();
    obj.p();
    return 0;
}