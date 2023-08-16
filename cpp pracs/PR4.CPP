#include<iostream.h>
#include<conio.h>



int main()
{
     int i,n,m=0,flag=0;
     clrscr();
     cout<<"enter the number to check prime : "<<endl;
     cin>> n;
     m= n/2;
     for (i=2;i<m;i++)
      {
	if (n%i==0)
	  {
		cout<<"number is not prime."<<endl;
		flag=1;
		break;
      }
   }
   if (flag==0)
   cout<<"number is prime."<<endl;
   getch();
   return 0;
}