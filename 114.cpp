#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int last_digit = n%10;
        int first_digit;
        while(n>=10){
            n=n/10;
        }
        first_digit=n;
        cout<<first_digit + last_digit<<endl;
    }
    return 0;
}