#include<iostream>
using namespace std;

class Base           //12 size
{
    public:
      int i;
    private:
        int j;
    protected:
        int k; 

    public:
        Base()
        {
            i = 10; j = 20; k = 30;
        } 
        void fun()              
        {
            cout<<i<<"\n";           //allowed
            cout<<j<<"\n";           //allowed
            cout<<k<<"\n";           //allowed
        }


};

class Derived: public Base          //16 size
{
     public:
        void Display()
        {
            cout<<i<<"\n";           //allowed
            cout<<j<<"\n";           //error (base private)
            cout<<k<<"\n";           //allowed
        }

};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<bobj.i<<"\n";           //allowed
    cout<<bobj.j<<"\n";           //error
    cout<<bobj.k<<"\n";           //error

    
    cout<<dobj.i<<"\n";           //allowed
    cout<<dobj.j<<"\n";           //error
    cout<<dobj.k<<"\n";           //error

    bobj.fun();            //allowed call
    dobj.Display();        //allowed call

    return 0;
}