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
        void bun()
        {
            cout<<"inside Base bun\n";
        }
        void run()
        {
            cout<<"inside Base run\n";
        }
};

class Derived : public Base
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
            cout<<"insideDerived mun\n";
        }
};
int main()
{

   
    Base *bp = new  Derived();          //upcasting

    bp ->fun();             // Base fun
    bp ->gun();            //base gun
    bp ->sun();             //base sun
    //bp ->run();            //error
    //bp ->mun();            //error
    bp ->bun();            //base bun
    
   return 0;

}