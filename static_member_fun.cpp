#include<iostream>
using namespace std;
class Note{
    static int num;
    public:
    static int fun(){
        return num;
    }
};
int Note::num=5;
int main(){
    cout<<"The value of the num is : "<<Note::fun()<<endl;
    return 0;
}