/* ABSTRACT CLASS */
//class Shape is as abstract class that means class Shape can not create any object.

#include<iostream>
using namespace std;
class Shape{
    public:
        virtual void draw()=0;
};
class Rectangle:public Shape{
    public:
        void draw(){
            cout<<"\nDraw Rectangle...";
        }
};
class Circle:public Shape{
    public:
        void draw(){
            cout<<"\nDraw Circle...";
        }
};
int main(){
    Circle cir;
    Rectangle rec;
    rec.draw();
    cir.draw();
    cout<<"\nHere class Shape is as abstract class.\n";
    return 0;
}