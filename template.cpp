// #include<iostream>
// using namespace std;
// template <class T>
// class cal{
//     T a,b;
//     public:
//         cal(T x ,T y)
//         {
//             a=x;
//             b=y;
//         }
//         void result()
//         {
//             cout<<"\nAddition --> "<<a+b;
//             cout<<"\nsubstraction --> "<<a-b;
//             cout<<"\nmultiplication --> "<<a*b;
//             cout<<"\nDivision --> "<<a/b;
//         }
// };
// int main()
// {
//     cal <int> x(2,2);
//     cal <float> y(4.4,2.2);
//     cout <<"\nintiger object ------> ";
//     x.result();
//     cout<<"\n\nfloat object ------> ";
//     y.result();
//     return 0; 
// }


/* CLASS TEMPLATE */

// #include<iostream>
// using namespace std;
// template <class T>
// class A{
//     public:
//         T num1 = 5;
//         T num2 = 6;
//         void add(){
//             cout<<"\nAddition of num1 and num2 is : "<<num1+num2;
//         }
// };
// int main(){
//     A <int> a;
//     a.add();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// template <class T1,class T2>
// class A{
//     T1 a;
//     T2 b;
//     public :
//         A(T1 x,T2 y){
//             a=x;
//             b=y;
//         }
//         void display(){
//             cout<<"\nValue of a and b is : "<<a<<","<<b;
//         }
// };
// int main(){
//     A<int,float> d(5,6.5);
//     d.display();
//     return 0;    
// }

/* FUNCTION TEMPLATE */

// #include<iostream>
// using namespace std;
// template <class T>
// T add(T &a,T &b){
//     T result = a+b;
//     return result;
// }
// int main(){
//     int i=2;
//     int j=3;
//     float m=2.3;
//     float n=1.2;
//     cout<<"\nAddition of i and j is : "<<add(i,j);
//     cout<<"\nAddition of m and n is : "<<add(m,n);
//     return 0;
// }


// #include<iostream>
// using namespace std;
// template <class X,class Y>
// void fun(X a, Y b){
//     cout<<"\nValue of a is : "<<a;
//     cout<<"\nValue of b is : "<<b;
// }
// int main(){
//     fun(15,12.3);
//     return 0;
// }


/* OVERLOADING OF TEMPLATE : FUNCTION */
// #include<iostream>
// using namespace std;
// template <class T>
// void display(T x){
//     cout<<"\nTemnplate display : "<<x;
// }
// void display(int x){
//     cout<<"\nExplicite display : "<<x;
// }
// int main(){
//     display(100);
//     display(12.34);
//     display('c');
//     return 0;
// }


/* WRITE A PROGRAM TO SORT AN ARRAY USING FUN TEMPLATE */
#include<iostream>
using namespace std;
template <class T>
void sort(T a[],int n){
    for (int i=0;i<n;i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]>=a[j])
            {
                T temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main(){
    int x[5]={10,50,40,30,20};
    float y[5]={1.3,1.2,1.4,1.1,1.5};
    sort(x,5);
    sort(y,5);
    cout<<"\nAfter sorting x array is : \n";
    for (int i = 0; i < 5; i++)
    {
            cout<<x[i]<<endl;
    }
    cout<<"\nAfter sorting y array is : \n";
    for (int j = 0; j < 5; j++)
    {
        cout<<y[j]<<endl;
    }
    return 0;
}