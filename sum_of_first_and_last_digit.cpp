#include<iostream>
using namespace std;
int main(){
    int n,first_num,last_num;
    cin>>n;
    last_num=n%10;
    while(n>=10){
        n=n/10;
    }
    first_num=n;
    int sum=first_num+last_num;
    cout<<sum;
    return 0;
}