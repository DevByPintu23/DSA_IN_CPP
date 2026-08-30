#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the base number:- ";
    cin>>a;
    int b;
    cout<<"enter the power number:- ";
    cin>>b;
    long long int power=1;
    for(int i= 1; i<=b; i++){
        power*=a;
        if(a==0) break;
    }
   if(a==0 && b==0) cout<<"indeterminant form";
   else cout<<power;
}
    
