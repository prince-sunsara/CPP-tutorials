
#include<iostream.h>
#include<conio.h>
int prime (int);
int main ()
{
  int a,b;
  clrscr();
  cout<<"enter the number \n";
  cin>>a;
  b=prime(a);
  if( b==1)
  cout<<"prime";
  else
  cout<<"not prime";
  getch();
  return 0;
  }
  int prime (int a)

  {
  int f=0;
  int i;
  for (i=2;i<=a-1;i++)
  {
    if (a%i==0)
    {
     f=1;
     break;
    }
    else
     continue;
  }
if (f==1)
 {
 return 1;
 }
 else
  return 0;
  getch();
 }
