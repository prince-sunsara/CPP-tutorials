/* PROGRAM FOR WORKING WITH SINGLE FILE */
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     ofstream outf("ITEM");
//     cout<<"\nEnter item name : ";
//     char name[30];
//     cin>>name;
//     outf<<name<<"\n";
//     cout<<"Enter cost : ";
//     float cost;
//     cin>>cost;
//     outf<<cost<<"\n";
//     outf.close();
//     ifstream inf("ITEM");
//     inf>>name;
//     inf>>cost;
//     cout<<"\n";
//     cout<<"\nItem name : "<<name<<endl;
//     cout<<"Item cost : "<<cost<<endl;
//     inf.close();
//     return 0;
// }


/* PROGRAM FOR WORKING WITH MULTIPLE FILE */
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("country");
    fout<<"USA"<<endl;
    fout<<"UK"<<endl;
    fout<<"South Korea"<<endl;
    fout.close();
    fout.open("capital");
    fout<<"Washington\n";
    fout<<"London\n";
    fout<<"Seoul\n";
    fout.close();

    const int N=80;
    char line[N];
    ifstream fin;
    fin.open("country");
    cout<<"Content of country file\n";
    while(fin){
        fin.getline(line,N);
        cout<<line<<endl;
    }
    fin.close();
    fin.open("capital");
    cout<<"Content of capital file\n";
    while(fin){
        fin.getline(line,N);
        cout<<line<<endl;
    }
    fin.close();
    return 0;
}