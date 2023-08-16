#include<iostream>
using namespace std;
class item{
    static int count;
    int number;
    public:
        void get_data(int a){
            number=a;
            count++;
        }
        void display(void){
            cout<<"count : ";
            cout<<count<<endl;
        }
};
int item :: count;

int main(){
    item a,b,c;
    a.display();
    b.display();
    c.display();

    a.get_data(100);
    b.get_data(200);
    c.get_data(300);

    cout<<"After reading data \n";

    a.display();
    b.display();
    c.display();

    return 0;
}