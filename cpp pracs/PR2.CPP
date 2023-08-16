
#include<iostream.h>
#include<conio.h>

 int main()

{
    long int a,b,c,d;
    char ch;
    clrscr();
    cout<<"enter a number of a and b"<<endl;
    cin>>a>>b;
    do
    {
    cout<<"\n 1 addition";
    cout<<"\n 2 substraction";
    cout<<"\n 3 multiplication";
    cout<<"\n 4 division ";
    cout<<"\n 5 modulus";

    cout<<"\n enter your choice ";
    cin>>d;

    switch(d)

    {
       case 1: c=a+b;
	      cout<<"addition ="<<c;
	      break;

       case 2: c=a-b;
	       cout<<"substraction ="<<c;
	       break;

       case 3: c=a*b;
	      cout<<"multiplication ="<<c;
	      break;

       case 4: c=a/b;
	      cout<<"division ="<<c;
	      break;

       case 5: c=a%b;
	      cout<<"modulus ="<<c;
	      break;

       default: cout<<"\n illegel choice";
	       break;

    }
    cout<<endl<<"do you want to continue (y/n)";
    cin>>ch;

    }while(ch=='y'|| ch == 'Y');
    getch();
    return 0;



}