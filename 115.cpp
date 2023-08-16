#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,x=0,y=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a[i];
        cin>>a[i];
        if (a[i]%2==0)
        {
            x++;
        }
        else{
            y++;
        }
    }
    if (x>y)
    {
        cout<<"Read for battle\n";
    }
    else 
        cout<<"Not ready\n";  
}