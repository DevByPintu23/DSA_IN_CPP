#include<iostream>
using namespace std;
int main(){
    int n;
    int rev=0;
    cout<<"enter the number:- ";
    cin>>n;
    
    while(n!=0){
        
        rev *=10;
        rev +=(n%10);
        n/=10;
    }
    cout<<rev<<" reverse of the digit ";
}