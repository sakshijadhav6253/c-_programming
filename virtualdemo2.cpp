#include<iostream>
using namespace std;
class Base
{
    public:
    int i,j;
        void fun()
        {
            cout<<"inside Base fun\n";
        }
        void gun()
        {
            cout<<"inside Base gun\n";
        }
        void sun()
        {
            cout<<"inside Base fun\n";
        }
        void fun()
        {
            cout<<"inside Base fun\n";
        }
        void fun()
        {
            cout<<"inside Base fun\n";
        }
};

class Derived
{
    public:
    int x ;
        void gun()
        {
            cout<<"insideDerived gun\n";
        }
        void sun()
        {
            cout<<"insideDerived sun\n";
        }
         void run()
        {
            cout<<"insideDerived run\n";
        }
         void mun()
        {
            cout<<"insideDerived un\n";
        }
};
int main()
{

    Base*bp1 = new Base();             //no casting
    Derived*dp1 = new Derived();      //no casting
    Base*bp2 = new Derived();          //upcasting
    Derived*dp2=new Base();            //downcasting

   return 0;

}