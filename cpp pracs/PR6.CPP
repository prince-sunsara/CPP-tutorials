#include<iostream.h>
#include<conio.h>

int main()
{
    int groce;
    float sallary;
    clrscr();
    cout<<"\n enter the groce  for a week \n";
    cin>> groce;
    sallary=200 + 0.09*groce;
    cout<<"sallary="<<sallary;
    getch();
    return 0;
}