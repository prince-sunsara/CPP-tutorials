/* write a programm to impliment power function using function over loading
*/

#include<iostream.h>
#include<conio.h>
int mgjmari(int a, int b);
double dubmr(double x, int y);
int main ()
{
  int a,b;
  double x,y;
  clrscr();
  cout<<"\n enter the value of a and b: \n";
  cin>>a>>b;
  cout<<"answer is ="<<mgjmari(a,b)<<endl;
  cout<<"enter the value of x and y:\n";
  cin>>x>>y;
  cout<<"answer is ="<<dubmr(x,y)<<endl;
  getch();
  return 0;
}
int mgjmari(int a, int b)
{
	 int ans=1;
	 for(int i=1;i<=b;i++)
	  ans=ans*a;
	  return (ans);
}
double dubmr(double x,int y)
{
	double i,ans=1.0;
	 for(i=1;i<=y;i++)
	  ans=ans*x;
	  return (ans);
}
