/* VIRTUAL BASE CLASS */
#include<iostream>
using namespace std;
class A{
    public:
        void Show(){
           cout<<"\nHello Dear."; 
        }
};
class B:virtual public A{};
class C:virtual public A{};
class D:public B,public C{};
int main(){
    D d;
    d.Show();
    return 0;
}