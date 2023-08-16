/* Default constructor */
// #include<iostream>
// using namespace std;
// class employee{
//     public:
//         employee(){
//             cout<<"Default constructor invoked \n";
//         }
// };
// int main (void){
//     employee e1;
//     employee e2;
//     return 0;
// }



/*  parameterized constructor */
#include<iostream>
using namespace std;
class employee{
    public:
        int id;
        float salary;
        string name;
        employee(int i,string n,float s){
            id = i;
            name = n;
            salary = s;
        }
        void display(){
            cout<<id<<"\t"<<name<<"\t"<<salary<<endl;
        }
};

int main(void){
    employee e2=employee(101,"sonoo",10000);
    employee e3=employee(102,"Raj",20000);
    e2.display();
    e3.display();
    return 0;
}