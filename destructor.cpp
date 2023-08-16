/* Destructor */
#include<iostream>
using namespace std;
class Employee{
    public:
        Employee(){
            cout<<"constructor invoked\n";
        }
        ~Employee(){
            cout<<"Destructor invoked\n";
        }
};
int main(void){
    Employee x;
    Employee y;
    return 0;
}