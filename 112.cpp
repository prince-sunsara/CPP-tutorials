#include<iostream>
using namespace std;
int main(){
    int N,a,b,c;
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        cin>>a>>b>>c;
        if ((a<b && a>c) || (a>b && a<c))
        {
            cout<<a;
        }
        else if ((b>a && b<c) || (b<a && b>c))
        {
            cout<<b;
        }
        else{
            cout<<c;
        }        
        cout<<endl;
    }
}