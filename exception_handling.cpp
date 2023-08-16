/* TRY BLOCK THROING AN EXCEPTION */
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"\nEnter values of a and b \n";
//     cin>>a>>b;
//     int x=a-b;
//     try{
//         if(x !=0){
//             cout<<"\nResult (a/x) = "<<a/x<<endl;
//         }
//         else{
//             throw(x);
//         }
//     }
//     catch(int i){
//         cout<<"Exception caught : x ="<<x<<endl;
//     }
//     cout<<"END";
//     return 0;
// }


/* INVOKING FUNCTION THAT GENERATE EXCEPTION */
// #include<iostream>
// using namespace std;
// void divide(int x,int y ,int z){
//     cout<<"\nWe are inside the function \n";
//     if((x-y) !=0){
//         int R=z/(x-y);
//         cout<<"Result = "<<R<<"\n";
//     }
//     else{
//         throw(x-y);
//     }
// }
// int main(){
//     try{
//         cout<<"we are inside the try block \n";
//         divide(10,20,30);
//         divide(10,10,20);
//     }
//     catch(int i){
//         cout<<"caught the exception \n";
//     }
//     return 0;
// }

/* MULTIPLE CATCH STATEMENT */
#include<iostream>
using namespace std;
void test(int x){
    try{
        if(x==1)
            throw x;
        else 
            if(x==0)
                throw 'x';
        else 
            if(x==-1)
                throw 1.0;
        cout<<"End of try-block \n";
    }
    catch(char c){
        cout<<"Cought a character \n";
    }
    catch(int m){
        cout<<"Caught an integer \n";
    }
    catch(double d){
        cout<<"Caught an double \n";
    }
    cout<<"End of try-catch system \n\n";
}
int main(){
    cout<<"Testing multiple catches \n";
    cout<<"x ==1\n";
    test(1);
    cout<<"X == 0\n";
    test(0);
    cout<<"X == -1\n";
    test(-1);
    cout<<"x == 2\n";
    test(2);
    return 0;
}