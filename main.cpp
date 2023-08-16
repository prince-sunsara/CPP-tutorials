/*
printf=cout
*/
    // #include<iostream>
    // using namespace std;
    // int main()
    // {
    //     cout<<"Hellow World."<<endl;
    //     cout<<"Prince";
    //     return 0;
    // }

/*
camelCase Ntation
*/
    // #include<iostream>
    // using namespace std;
    // int main()
    // {
    //     int marksInMaths=88;
    //     cout<<"The marks in Maths is : "<<marksInMaths;
    //     return 0;
    // }

/*
size
*/
    // short a; //--> small size integer.
    // int a; //--> it's size is > short.
    // long b;//--> it's size is > int.
    // long long c;//--> it's size is > long.

    // float < double < long double

/*
User input or operator
*/
    // #include<iostream>
    // using namespace std;
    // int main()
    // {
    //     int a,b;
    //     cout<<"Enter the value of a and b:\n";
    //     cin>>a>>b;
    //     cout<<"The sum of a and b is = "<<a + b<<endl;
    //     cout<<"The sub of a and b is = "<<a - b<<endl;
    //     cout<<"The mul of a and b is = "<<a * b<<endl;
    //     cout<<"The div of a and b is = "<<(float)a / b<<endl;
    //     cout<<"The reminder of a and b is = "<<a % b;
    //     return 0;
    // }

/*
Conditional Statements
*/
    // #include<iostream>
    // #include<stdlib.h>
    // using namespace std;
    // int main ()
    // {
    //     int age;
    //     cout<<"Enter your age:\n";
    //     cin>>age;
    //     if (age>150 || age < 1)
    //     {
    //         cout<<"invalide age!\n";
    //     }
    //     else if (age>=18)
    //     {
    //         cout<<"you can vote !\n";
    //     }
    //     else
    //         cout<<"you can not vote !";
    //     return 0;
    // }

/*
Switch statement
*/
    // #include<iostream>
    // #include<stdlib.h>
    // using namespace std;
    // int main ()
    // {
    //     int age;
    //     cout<<"Enter your age : \n";
    //     cin>>age;
    //     switch(age)
    //     {
    //         case 12:
    //             cout<<"your age is 12.\n";
    //             break;
    //         case 18:
    //             cout<<"your age is 18.\n";
    //             break;
    //         default:
    //             cout<<"you are not 12 or 18.";
    //     }
    //     return 0;
    // }

/*
Loops (Iterative Statements)
*/
    // #include<iostream>
    // #include<stdlib.h>
    // using namespace std;
    // int main ()
    // {
    //     int index=0;

    //     // //while loop :
    //     // while(index<34)
    //     // {
    //     //     cout<<"We are at index number : "<<index<<endl;
    //     //     index++;
    //     // }

    //     // //do-while loop : ek vaar tho chalej condition fail hoy to bi.
    //     // do
    //     // {
    //     //     cout<<"We are at index number : "<<index<<endl;
    //     //     index++;
    //     // } while (index<10);

    //     // //for loop:
    //     // for (int i = 0; i < 10; i++)
    //     // {
    //     //     cout<<"We are at index number : "<<index<<endl;
    //     //     index++;
    //     // }

    //     for(int i=0;i<10;i++)
    //     {
    //         cout<<"The value of i is : "<<i+1<<endl;
    //     }
    //     return 0;
    // }

/*
Functions
*/
    // #include<iostream>
    // #include<stdlib.h>
    // using namespace std;
    // int add(int a , int b)
    // {
    //     int c;
    //     c = a + b;
    //     return c;
    // }
    // int main ()
    // {
    //     int a,b;
    //     cout<<"Enter thr value of a and b : \n";
    //     cin>>a>>b;
    //     cout<<"The function returned "<< add(a,b);
    //     return 0;
    // }

/*
Arrays
*/
    // #include<iostream>
    // #include<stdlib.h>
    // using namespace std;
    // int main ()
    // {
    //     // //one dymantion.

    //     // int arr[3]={1,3,5};
    //     // cout<<arr[2];
    //     // int marks[6];
    //     // for (int i = 0; i < 6; i++)
    //     // {
    //     //     cout<<"Enter the marks of "<<i+1<<"th student"<<endl;
    //     //     cin>>marks[i];
    //     // }
    //     // for (int i = 0; i < 6; i++)
    //     // {
    //     //     cout<<"Marks of "<<i+1<<"th student is "<<marks[i]<<endl;
    //     // }

    //     //two dymantion.

    //     int arr[2][3]={
    //         {1,2,3},
    //         {4,5,6}
    //     };
    //     for (int i = 0; i < 2; i++)
    //     {
    //         for (int j = 0; j < 3; j++)
    //         {
    //             cout<<"The value at "<<i+1<<" , "<<j+1<<" is "<<arr[i][j]<<endl;
    //         }
    //     }
    //     return 0;
    // }

/*
Typecasting
*/
    // #include<iostream>
    // #include<stdlib.h>
    // using namespace std;
    // int main ()
    // {
    //     int a =343;
    //     float b = 87.94;
    //     cout<<(float) a/34<<endl;
    //     cout<<(int) b;
    //     return 0;
    // }

/*
Strings
*/
    // #include<iostream>
    // #include<string.h>
    // using namespace std;
    // int main ()
    // {
    //     string name ="Prince";
    //     cout<<"The name is : "<<name<<endl;
    //     cout<<"The length of name is : "<<name.length()<<endl;
    //     cout<<"The name is "<<name.substr(0,3)<<endl;
    //     cout<<"The name is "<<name.substr(0,4)<<endl;
    //     return 0;
    // }

/*
Pointers Concept
*/
    // #include<iostream>
    // #include<stdlib.h>
    // using namespace std;
    // int main ()
    // {
    //     int a=34;
    //     int *ptra;
    //     ptra = &a;
    //     cout<<"the valu of a is "<<a<<endl;
    //     cout<<"the value of a is "<<*ptra<<endl;
    //     cout<<"the address of a is "<<&a<<endl;
    //     cout<<"the address of a is "<<ptra<<endl;
    //     return 0;
    // }

/*
Objects & Classes
*/
    // #include <iostream>
    // #include <string.h>
    // using namespace std;
    // class employee
    // {
    // public:
    //     int sallary;
    //     string name;

    //     employee(string n, int s, int sp)
    //     {
    //         this->name = n;
    //         this->sallary = s;
    //         this->secretpassword = sp;
    //     }

    //     void printdetail()
    //     {
    //         cout << "Name : " << this->name << "\t\t"
    //              << "sallary : " << this->sallary << endl;
    //     }

    //     void getsecretpassword()
    //     {
    //         cout << "The secretpassword is " << this->secretpassword;
    //     }

    // private:
    //     int secretpassword;
    // };

    // class programmer : public employee
    // {
    // public:
    //     int errors;
    // };
    // int main()
    // {
    //     employee a("prince constructor", 100, 2504);
    //     // cout<<a.secretpassword;
    //     // a.name = "prince";
    //     // a.sallary = 10000;
    //     a.printdetail();
    //     a.getsecretpassword();
    //     return 0;
    // }


