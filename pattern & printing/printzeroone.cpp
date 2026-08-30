#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number n:- ";
    cin>>n;
    int a=1;
    int b =0;
   
    
    for(int i=1; i<=n; i++){
        
       for(int j=1; j<=i; j++){
       if((i+j)%2==0) cout<<a<<" ";
       else cout<<b<< " ";
        }
         
         
     cout<<endl;
    }
    
}
