#include<iostream.h>
#include<conio.h>

void exchange(int (&)[],int &);
int main()
{
	int n,a[50],i;
	clrscr();
	cout<<"\n how many element in array:\n";
	cin>>n;
	cout<<"\n enter array element;";

	for (i=0;i<n;i++)
	 cin>>a[i];

	exchange(a,n);
	  cout<<"\n shorted array is as follow : \n ";
       for(i=0;i<n;i++)
       cout<<a[i]<<endl;
	getch();
	return 0;

}
void exchange(int (&a)[],int &n)
{
	int i,j,temp;

	for (i=0;i<n;i++)
		{
		for (j=i+1;j<n;j++)
		 {
			if(a[i]>a[j])
			 {
			 temp=a[i];
			 a[i]=a[j];
			 a[j]=temp;
			 }
		 }
		}

}