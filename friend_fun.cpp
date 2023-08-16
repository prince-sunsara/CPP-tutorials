// #include<iostream>
// using namespace std;
// class A{
//     int x;
//     public:
//     void setdata(int i){
//         x=i;
//     }
//     friend void min(A,B);
// };
// class B{
//     int y;
//     public:
//     void setdata(int i){
//         y=i;
//     }
//     friend void min(A,B);
// };
// void min(A a,B b){
//     if (a.x<=b.y)
//     std::cout<<a.x;
//     else
//     std::cout<<b.y;
// }
// int main(){
//     A a;
//     B b;
//     a.setdata(10);
//     b.setdata(20);
//     min(a,b);
//     return 0;
// }


// #include <iostream>  
// using namespace std;  
// class B;
// class A  
// {  
//     int x;  
//     public:  
//     void setdata(int i){  
//         x=i;  
//     }  
//     friend void min(A,B); 
// };  
// class B  
// {  
//     int y;  
//     public:  
//     void setdata(int i){  
//         y=i;  
//     }  
//     friend void min(A,B); 
// };  
// void min(A a,B b)  
// {  
//     if(a.x<=b.y)  
//     std::cout << a.x << std::endl;  
//     else  
//     std::cout << b.y << std::endl;  
// }  
//    int main()  
// {  
//    A a;  
//    B b;  
//    a.setdata(10);  
//    b.setdata(20);  
//    min(a,b);  
//     return 0;  
//  }  




#include<iostream>
using namespace std;
class sample{
    int a;
    int b;
    public:
        void setvalue()
        {
            a=25;
            b=40;
        }
    friend float mean(sample s);
};
float mean(sample s)
{
    return float(s.a+s.b)/2.0;
}
int main()
{
    sample X;
    X.setvalue();
    cout<<"Mean value = "<<mean(X);
    return 0;
}