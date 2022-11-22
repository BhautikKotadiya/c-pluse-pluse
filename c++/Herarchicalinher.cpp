#include<iostream>
using namespace std;
class A
{
    public:
    int a()
    {
        cout<<"one"<<endl;
        return 0;
    }
};
class B : public A
{
    public:
    int b()
    {
        cout<<"two"<<endl;
        return 0;
    }
};
class C : public A
{
    public:
    int c()
    {
        cout<<"three"<<endl;
        return 0;
    }
};
class D : public B
{
    public:
    int d()
    {
        cout<<"four"<<endl;
        return 0;
    }
};
class E :public B
{
    public:
    int e()
    {
        cout<<"five"<<endl;
        return 0;
    }
};
class F : public C
{
    public:
    int f()
    {
        cout<<"six"<<endl;
        return 0;
    }
};
class G : public C 
{
    public:
    int g()
    {
        cout<<"seven"<<endl;
        return 0;
    }
};
int main()
{
    G obj;
    E obj1;
    F obj2;
    D obj3;
    obj.a();
    obj3.b();
    obj.c();
    obj3.d();
    obj1.e();
    obj2.f();
    obj.g();
    return 0;
}