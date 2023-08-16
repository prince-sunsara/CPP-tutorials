#include<iostream.h>
#include<conio.h>
int main()
{
   int a,b;
   clrscr();
   cout<<"\n enter the two number\n";
   cin>>a>>b;
   cout<<"the number you enter is = "<<endl<<a<<endl<<b<<endl;
   if(a%b==0)
   {
   cout<<"first number is multiple of second number"<<endl;
   }
   else
   {
   cout<<"first number is not multiple of second number"<<endl;
   }
   getch();
   return 0;
}