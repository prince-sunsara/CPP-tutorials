/* BASIC TYPE TO CLASS TYPE */ 
// #include<iostream>
// using namespace std;
// class Time
// {
// int hrs,min;
// public:
//     Time(int t)
//     {
//     cout<<"Basic Type to Class Type Conversion...\n";
//     hrs=t/60;
//     min=t%60;
//     }
//     void show();
// };
// void Time::show()
// {
//    cout<<hrs<< ": Hours(s)" <<endl;
//    cout<<min<< " Minutes" <<endl;
// }
// int main()
// {
//    int duration;
//    cout<<"\nEnter time duration in minutes : ";
//    cin>>duration;
//    Time t1=duration;
//    t1.show();
// }


/* CLASS TYPE TO BASIC TYPE */
// #include<iostream>
// using namespace std;
// class Time{
//     int hrs,min;
//     public:
//         Time(int a,int b){
//             cout<<"\nconstructor called with two parameters..";
//             hrs=a;
//             min=b;
//         }
//         operator int(){
//             cout<<"\nClass type to basic type conversion..\n";
//             return (hrs*60+min);
//         }
//         ~Time(){
//             cout<<"\nDestructor called.."<<endl;
//         }
// };
// int main(){
//     int h,m,duration;
//     cout<<"\nEnter Hours : ";
//     cin>>h;
//     cout<<"\nEnter Minutes : ";
//     cin>>m;
//     Time t(h,m);
//     duration=t;
//     cout<<"\nTotal Minutes are : "<<duration;
//     cout<<"\n\n2nd method operator overloading";
//     duration=t.operator int();
//     cout<<"\nTotal minutes are : "<<duration;
//     return 0;
// }


/* CLASS TYPE TO ANOTHER CLASS TYPE  */
#include<iostream>
using namespace std;
class Time{
    int hrs,min;
    public:
        Time(int h,int m){
            hrs=h;
            min=m;
        }
        Time(){
            cout<<"\nTime's Object created..";
        }
        int get_value(){
            int tot_min=(hrs*60)+min;
            return tot_min;
        }
        void display(){
            cout<<"Hours : "<<hrs<<endl;
            cout<<"Minutes : "<<min<<endl;
        }
};
class Minutes{
    int min;
    public:
    Minutes(){
        min=0;
    }
    void operator=(Time t){
        min=t.get_value();
    }
    void display(){
        cout<<"\nTotal Minutes : "<<min<<endl;
    }
};
int main(){
    Time t1(2,30);
    t1.display();
    Minutes m1;
    m1.display();
    m1=t1;
    t1.display();
    m1.display();
    return 0;
}