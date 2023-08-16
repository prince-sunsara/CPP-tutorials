// #include<iostream>
// using namespace std;
// int main(){
//     int T,a,b;
//     cin>>T;
//     for(int i=0;i<T;i++){
//         cin>>a>>b;
//         cout<<endl<<a+b<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int x,y;
//     cin>>x>>y;
//     if(x%5==0 && x<(y-0.5))
//         cout<<endl<<((y-x)-0.5);
//     else 
//         cout<<y;
	
// }

#include<iostream>
using namespace std;
int main(){
    int a,b,j;
    int ans=0;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        
        cin>>j;
        if(j%b==0)
            ans++;
    }
    cout<<ans;
}