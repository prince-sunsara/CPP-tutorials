#include<iostream>
using namespace std;
class Box{
    public:
        double height;
        double length;
        double breadth;
    
    void setVal(double len,double hei,double bre)
    {
        length=len;
        height=hei;
        breadth=bre;
    }
    double getVal(void);
};
double Box::getVal(void){
    return length*breadth*height;
}
int main(){
    Box x;
    Box y;
    double Volume=0.0;

    x.setVal(5.0,6.0,7.0);
    y.setVal(12.0,13.0,10.0);

    Volume=x.getVal();
    cout<<"Volume of X : "<<Volume<<endl;

    Volume=y.getVal();
    cout<<"Volume of Y : "<<Volume<<endl;
    return 0;
    
}