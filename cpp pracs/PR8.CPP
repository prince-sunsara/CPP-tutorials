#include<iostream.h>
#include<conio.h>
void prime(int , int);
int main()
{
	int a,b;
	clrscr();
	cout<<"\n enter the value of a and b:\n";
	cin>>a>>b;
	prime(a,b);
	getch();
	return 0;
}
void prime(int a, int b)
{
	int i,j;
	int f;
	for(i=a+1;i<b;i++)
	  {
		f=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			  {
			    f=1;
			    break;
			  }
		}

	if(f==0)
	cout<<i<<endl;
	}
}