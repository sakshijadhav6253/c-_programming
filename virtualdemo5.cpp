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
        virtual void  sun()
        {
            cout<<"inside Base sun\n";
        }
        void bun()
        {
            cout<<"inside Base bun\n";
        }
    };

class Derived : public Base
{
    public:
    int x ;
        void gun()
        {
            cout<<"inside Derived gun\n";
        }
        void sun()
        { 
            cout<<"inside Derived sun\n";
        }
         void run()
        {
            cout<<"inside Derived run\n";
        }
         void mun()
        {
            cout<<"inside Derived mun\n";
        }
};
int main()
{
 
   
    Base *bp = new  Derived();          //upcasting

    bp ->fun();             // Base fun
    bp ->gun();            //base gun
    bp ->sun();             //Derived sun
    //bp ->run();            //error
    //bp ->mun();            //error
    bp ->bun();            //base bun
    
   return 0;

}