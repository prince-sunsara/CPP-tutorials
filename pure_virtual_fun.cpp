/* PURE VIRTUAL FUNCTION */
#include<iostream>
using namespace std;
class Base{
    public:
        virtual void show()=0;
};
class Derived:public Base{
    public:
        void show(){
            cout<<"\nDerived class is derived from base class.\n";
        }
};
int main(){
    Base *bptr;
    Derived d;
    bptr=&d;
    bptr->show();
    return 0;
}