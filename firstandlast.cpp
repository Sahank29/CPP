#include<iostream>
using namespace std;

int main(){
    int n,t,first,last,j;
    cout<<"Enter the number of elements :";
    cin>>n;
    int arr[n];
    cout<<"Enter the values :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Target elements : ";
    cin>>t;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            first = j ==i;
            while(arr[j]==t){
                last = j;
                j++;
            }
        }
    }
    cout<<"\nFirst index is :"<<first+1<<" \nLast Index is : "<<last+1;
    return 0;
}