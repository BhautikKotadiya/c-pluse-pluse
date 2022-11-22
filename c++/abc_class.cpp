#include<iostream>
using namespace std;
class animal
{
    public:
        virtual void color()=0;
        virtual void voice()=0;
        virtual void habbit()=0;
        virtual void eat()=0;
        void leg()
        {
            cout<<"all animal have 4 leg"<<endl;
        }
        void eye()
        {
            cout<<"all animal have 2 eyes"<<endl;
        }
        void ear()
        {
            cout<<"all animal have 2 ear"<<endl;
        }
        void mouth()
        {
            cout<<"all animal have 1 mouth"<<endl;
        }
};
class dog : public animal
{
    public:
        void color()
        {
            cout<<"Dog colore is black"<<endl;
        }
        void voice()
        {
            cout<<"Dog voice is bark"<<endl;
        }
        void habbit()
        {
            cout<<"Dog habbit is rabies"<<endl;
        }
        void eat()
        {
            cout<<"normally dog drinking milk and eat cockie"<<endl;
        }
};
class cat : public animal
{
    public:
        void color()
        {
            cout<<"cat colore is black and white"<<endl;
        }
        void voice()
        {
            cout<<"cat voice is meow meow"<<endl;
        }
        void habbit()
        {
            cout<<"cat habbit is endless staing"<<endl;
        }
        void eat()
        {
            cout<<"normally cat drinking milk and eat rotli"<<endl;
        }
};
int main()
{
    dog obj;
    cat obj1;
    obj.leg();
    obj.eye();
    obj.ear();
    obj.mouth();
    obj.color();
    obj.voice();
    obj.habbit();
    obj.eat();
    obj1.color();
    obj1.voice();
    obj1.habbit();
    obj1.eat();
    return 0;
}