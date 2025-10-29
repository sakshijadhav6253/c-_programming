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
    virtual int substrsction (int A,int B);  //abstract
};

class Derived : public Base
{
    public:
    int x ;
    int substrsction (int A,int B)   //abstract
     {
        return A-B;
    }
    int multiplication (int A,int B)   //abstract
     {
        return A*B;
    }
        
};
int main()
{
    Base *bp = new  Derived();          //upcasting
    int iret = 0;

    iret= bp ->addition(11,10);
    iret= bp ->substrsction(11,10);
    //iret= bp ->multiplication (11,10);  //error
    


    
   return 0;

}