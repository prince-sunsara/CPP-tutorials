#include<iostream>
using namespace std;
int main()
{
    int size;
    int *arr = new int[size];
    cout<<"\nEnter the size of array :\n";
    std::cin>>size;
    cout<<"\nEnter the element : \n";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nThe Element that you have entered are : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<",";
    }
    delete arr;
    return 0;
}