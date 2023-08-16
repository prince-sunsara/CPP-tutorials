/* SINGLE INHERITANCE */
// #include<iostream>
// using namespace std;
// class Account{
//     public:
//         float salary=60000;
// };
// class Programmer:public Account{
//     public:
//         float bonus=5000;
// };
// int main(void){
//     Programmer p1;
//     cout<<"Salary : "<<p1.salary<<endl;
//     cout<<"Bonus : "<<p1.bonus<<endl;
//     return 0;
// }


/* MULTIPLE INHERITANCE */
// #include<iostream>
// using namespace std;
// class A{
//     protected:
//         int a;
//     public:
//         void get_a(int n){
//             a=n;
//         }
// };
// class B{
//     protected:
//         int b;
//     public:
//         void get_b(int n){
//             b=n;
//         }
// };
// class C:public A,public B{
//     public:
//         void display(){
//             cout<<"The value of a is : "<<a<<endl;
//             cout<<"The value of b is : "<<b<<endl;
//             cout<<"addition of a and b is : "<<a+b;
//         }
// };
// int main(){
//     C c;
//     c.get_a(10);
//     c.get_b(20);
//     c.display();
//     return 0;
// }


/* MULTILEVEL INHERITANCE */
// #include<iostream>
// using namespace std;
// class Animal{
//     public:
//         void eat(){
//             cout<<"Eating.....\n";
//         }
// };
// class Dog:public Animal{
//     public:
//         void bark(){
//             cout<<"Barking.....\n";
//         }
// };
// class BabyDog:public Dog{
//     public:
//         void weep(){
//             cout<<"Weeping....\n";
//         }
// };
// int main(){
//     BabyDog d;
//     d.eat();
//     d.bark();
//     d.weep();
//     return 0;
// }


/* HIERARCHICAL INHERITANCE */
// #include<iostream>
// using namespace std;
// class Shape{
//     public :
//         int a,b;
//         void get_data(int n,int m){
//             a=n;b=m;
//         }
// };
// class Rectangle: public Shape{
//     public:
//         int rectangle_area(){
//             int result=a*b;
//             return result;
//         }
// };
// class Triangle:public Shape{
//     public:
//         int trianle_area(){
//             float result = 0.5*a*b;
//             return result;       
//         }
// };
// int main(){
//     Rectangle r;
//     Triangle t;
//     int length,breadth,base,height;
//     cout<<"Enter the length and breadth of Rectangle : \n";
//     cin>>length>>breadth;
//     r.get_data(length,breadth);
//     int m = r.rectangle_area();
//     cout<<"Area of the Rectangle is : "<<m<<endl;
//     cout<<"\nEnter the base and height of triangle : \n";
//     cin>>base>>height;
//     t.get_data(base,height);
//     float n=t.trianle_area();
//     cout<<"Area of the triagle is : "<<n;
//     return 0;
// }


/* HYBRID INHERITANCE */
// #include<iostream>
// using namespace std;
// class A {
//     protected:
//         int a;
//     public:
//         void get_a(){
//             cout<<"\nEnter the value of a : ";
//             cin>>a;
//         }
// };
// class B :virtual public A{
//     protected :
//         int b;
//     public:
//         void get_b(){
//             cout<<"\nEnter the value of b : ";
//             cin>>b;
//         }
// };
// class C {
//     protected:
//         int c;
//     public:
//         void get_c(){
//             cout<<"\nEnter the value of c is : ";
//             cin>>c;
//         }
// };
// class D:virtual public B,virtual public C{
//     // protected:
//     //     int d;
//     public:
//         void mul(){
//             get_a();
//             get_b();
//             get_c();
//             cout<<"\nMultipication of a,b,c is : "<<a*b*c;
//         }
// };
// int main(){
//     D d;
//     d.mul();
//     return 0;
// }


/* MULTIPATH INHARITANCE */
// #include<iostream>
// using namespace std;
// class Person{
//     public:
//         char name[100];
//         int code;
//         void input(){
//             cout<<"\nEnter Name : ";
//             cin>>name;
//             cout<<"\nEnter Code : ";
//             cin>>code;
//         }
//         void display(){
//             cout<<"\nName : "<<name;
//             cout<<"\nCode : "<<code;
//         }
// };
// class Account:virtual public Person{
//     public:
//         float pay;
//         void getpay(){
//             cout<<"\nEnter the pay : ";
//             cin>>pay;
//         }
//         void display(){
//             cout<<"\nPay : "<<pay;
//         }
// };
// class Admin:virtual public Person{
//     public:
//         int experience;
//         void getexp(){
//             cout<<"\nEnter the Experience : ";
//             cin>>experience;
//         }
//         void display(){
//             cout<<"\nExperience : "<<experience<<" years";
//         }
// };
// class Master:public Account,public Admin{
//     public:
//         char n[100];
//         void get_total(){
//             cout<<"\nEnter company name : ";
//             cin>>n;
//         }
//         void display(){
//             cout<<"\nCompany Name : "<<n;
//         }
// };
// int main(){
//     Master m;
//     m.input();
//     m.getpay();
//     m.getexp();
//     m.get_total();
//     m.Person::display();
//     m.Account::display();
//     m.Admin::display();
//     m.display();
//     return 0;
// }


/* INHERITANCE USING STRUCTURE */
// #include<iostream>
// using namespace std;
// struct Base
// {
//     int A;  
// };
// struct Derived:public Base{
//     int B;
//     void display();
// };
// void Derived::display(){
//     cout<<"\nA = "<<A;
//     cout<<"\nB = "<<B;
// }
// int main(){
//     Derived d;
//     d.A=111;
//     d.B=112;
//     d.display();
//     return 0;
// }
