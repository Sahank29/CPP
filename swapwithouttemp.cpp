#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the values to be swaped :";
    cin>>a>>b;
    cout<<"\n--- Swapped value is --- \n";
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Outputs are :"<<a<<"  "<<b;
}