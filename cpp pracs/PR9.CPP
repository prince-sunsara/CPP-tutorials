#include<iostream.h>
#include<conio.h>

inline int maximum(int a, int b, int c)
{
	if(a>b && a>c)
	return a;

	else if(b>a && b>c)
	return b;

	else
	return c;
}
int main()
{
       long int a,b,c;
	clrscr();
	cout<<"\n enter the value of a and b and c: \n";
	cin>>a>>b>>c;
	int max=maximum(a,b,c);
	cout<<"\n largest no="<<max;
	getch();
	return 0;
}