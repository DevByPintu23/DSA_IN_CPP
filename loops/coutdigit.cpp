#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<"enter the number:- ";
    cin>>n;
    if(n==0) count++;
    while(n!=0){
        
        n/=10;
        count++;
    }
    cout<<count<<" digit number";
}