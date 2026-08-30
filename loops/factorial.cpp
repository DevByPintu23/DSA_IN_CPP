#include<iostream>
using namespace std;
int main(){
    int n;
    long long int fact=1;
    cout<<"enter the number:- ";
    cin>>n;
    for(int i= 2; i<=n; i++){
      
        fact *=i;
        
        
    }
    cout<<fact;
    
}