#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter to n term to you print:-";
    cin>>n;
    //1 2 4 8 16 32...
    int a=99,d=4;
    if(a>=0){
 for(int i=n; i>=1; i-=1){
    cout<<a<<" ";
    a= a-d;
      
 } 
    }
   
}