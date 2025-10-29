#include<iostream>
using namespace std;
class Base
{
    public:
    int i,j;
    int addition (int A,int B)   //concreat  
    {
        return A+B;
    }
    virtual int substrsction (int A,int B)   //abstract
};

class Derived : public Base
{
    public:
    int x ;
        
};
int main()
{
 
   
    Base *bp = new  Derived();          //upcasting

    
   return 0;

}