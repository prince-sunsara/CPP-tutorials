
// scop resolution operator 

#include<iostream>
#include<stdlib.h>
using namespace std;
int c= 43;
int main ()
{
    
    int a=10,b=3;
    int c=a+b;
    cout<<"a + b = "<<c<<endl;
    cout<<"the globle value of c is "<<::c;

    //******************float,double and long double literals*******************
    // float d=34.4f;
    // long double e = 34.4l;
    // cout<<"The value of d is "<<d<<endl<<"the value of e is "<<e<<endl;
    // cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;
    
    //*****************Reference variables***************
    // Rohan Das---> Monty----> Rohu---> Dangerous coder
    // float x=455;
    // float &y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //*****************Type casting***********
    // int a=45;
    // float b = 25.5;
    // cout<<"the value of a is "<<(float)a<<endl;
    // cout<<"the value of b is "<<(int)b<<endl;

    // int c=int(b);

    // cout<<"The expression is "<<a + b<<endl;
    // cout<<"The expression is "<<a + int(b)<<endl;
    // cout<<"The expression is "<<a + (int)b<<endl;
    // return 0;
}