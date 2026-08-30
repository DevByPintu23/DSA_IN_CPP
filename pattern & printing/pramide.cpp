#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number n:- ";
    cin>>n;
    
   
    //method 1
   /* for(int i=1; i<=n; i++){
      for(int j=1; j<=n-i; j++){
        cout<<"  ";
      }
      for(int k=1; k<=2*i-1; k++){
        cout<<"* ";
        }*/
       int nsp=n-1, nst=1;
    
    for(int i=1; i<=n; i++){
      for(int j=1; j<=nsp; j++){
        cout<<"  ";
      }
      for(int k=1; k<=nst; k++){
        cout<<"* ";
        }
        nsp--;
        nst+=2;
       
       
         
         
     cout<<endl;
    }
    
}
