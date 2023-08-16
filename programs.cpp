/* 1. Overloading unary operator using member function */
// #include<iostream>
// using namespace std;
// class A{
//     int x,y,z;
//     public:
//         void getdata(int a,int b,int c){
//             x=a;
//             y=b;
//             z=c;
//         }
//         void display(){
//             cout<<"\nx = "<<x<<"\ny = "<<y<<"\nz = "<<z<<"\n\n";
//         }
//         void operator -(){
//             x=-x;
//             y=-y;
//             z=-z;
//         }
// };
// int main(){
//     A a;
//     a.getdata(2,3,-4);
//     a.display();
//     -a;
//     a.display();
//     return 0;
// }


/* 2. Overloading binary operator using member function */
// #include<iostream>
// using namespace std;
// class A {
//     int x,y,z;
//     public:
//         void input(){
//             cout<<"\nEnter x \n";
//             cin>>x;
//             cout<<"\nEnter y \n";
//             cin>>y;
//         }
//         void display(){
//             cout<<"\nx = "<<x<<"\ny = "<<y<<"\nx + y = "<<x+y;
//         }
//         A operator +(A p);
// };
// A A::operator +(A p){
//     A t;
//     t.x=x+p.x;
//     t.y=y+p.y;
//     return t;
// }
// int main(){
//     A a1,a2,a3;
//     a1.input();
//     a2.input();
//     a3.input();
//     a3=a1+a2;
//     a1.display();
//     a2.display();
//     a3.display();
//     return 0;
// }


/* 3. Unary operator using friend function */
// #include<iostream>
// using namespace std;
// class A{
//     int a=10,b=20,c=30;
//     public:
//         void getvalue(){
//             cout<<"Values of A,B & C\n";
//             cout<<a<<endl<<b<<endl<<c<<endl;
//         }
//         void show(){
//             cout<<a<<endl<<b<<endl<<c<<endl;
//         }
//         void friend operator -(A &x);
// };
// void operator -(A &x){
//     x.a=-x.a;
//     x.b=-x.b;
//     x.c=-x.c;
// }
// int main(){
//     A x;
//     x.getvalue();
//     cout<<"\nBefore overloading \n";
//     x.show();
//     cout<<"\nAfter overloading \n";
//     -x;
//     x.show();
//     return 0;
// }


/* 4. binary operator using friend function */
#include<iostream>
using namespace std;
class complex{
    float x;
    float y;
    public:
        complex(){}
        complex(float real,float img){
            x=real;
            y=img;
        }
    friend complex operator +(complex,complex);
    void display();
};
complex operator +(complex a, complex b){
    complex t;
    t.x=a.x+b.x;
    t.y=a.y+b.y;
    return t;
}
void complex::display()
{
    cout<<x<<"+j"<<y<<endl<<endl;
}
int main(){
    complex c1,c2,c3;
    c1=complex(2.5,3.5);
    c2=complex(1.6,2.7);
    c3=operator+(c1,c2);
    cout<<"c1 = ";
    c1.display();
    cout<<"c2 = ";
    c2.display();
    cout<<"c3 = ";
    c3.display();
    return 0;
}