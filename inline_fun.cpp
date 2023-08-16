#include<iostream>
using namespace std;
inline int square(int side)
{
    return side*side;
}
int main()
{
    int area,side;
    cout<<"Enter the side of a square : \n";
    cin>>side;
    area=square(side);
    cout<<"\nThe area of the square is : "<<area;
}