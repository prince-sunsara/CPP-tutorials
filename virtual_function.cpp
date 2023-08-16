/* VIRTUAL FUNCTION */
// #include<iostream>
// using namespace std;
// class A{
//     public:
//         virtual void display(){
//             cout<<"\nBase class is invoked";
//         }
// };
// class B:public A{
//     public:
//         void display()
//         {
//             cout<<"\nDerived class is invoked";
//         }
// };
// int main(){
//     A *a;
//     B b;
//     a = &b;
//     a->display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class A{
//     int x=5;
//     public:
//         void display(){
//             cout<<"\nValue of x is :"<<x;;
//         }
// };
// class B :public A{
//     int y=10;
//     public:
//         void display(){
//             cout<<"\nValue of y is :"<<y<<endl;
//         }
// };
// int main(){
//     A *a;
//     B b;
//     a=&b;
//     a->display();
//     return 0;
// }


#include<iostream>
using namespace std;
class Base{
    public:
        void display(){
            cout<<"\nDisplay base ";
        }
        virtual void show(){
            cout<<"\nshow base ";
        }
};
class Derived : public Base {
    public:
        void display(){
            cout<<"\nDisplay derived";
        }
        void show(){
            cout<<"\nshow derived ";
        }
};
int main(){
    Base b;
    Derived d;
    Base *bptr;

    cout<<"\nbptr points to Base \n ";
    bptr=&b;
    bptr->display();
    bptr->show();

    cout<<"\n\nbptr points to Derived\n";
    bptr=&d;
    bptr->display();
    bptr->show();

    return 0;
}