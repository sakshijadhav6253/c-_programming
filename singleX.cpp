#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()
        {
            cout<<"inside Base fun";
        }
};

class Derived: public Base
{
    public:
        int x;

        void gun()
        {
             cout<<"inside Base gun";
        }

};
int main()
{
    Base bobj;
    Derived dobj;

    dobj.gun();
    dobj.fun();

    cout<<"size of Base class object :"<<sizeof(bobj)<<"\n";
    cout<<"size of Derived class object :"<<sizeof(dobj)<<"\n";

    return 0;
}