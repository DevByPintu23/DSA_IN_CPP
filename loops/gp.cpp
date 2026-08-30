#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter to n term to you print:-";
    cin>>n;
    //1 2 4 8 16 32...
    int a=1,r=2;
 for(int i=1; i<=n; i+=1){
    cout<<a<<" ";
    a= a*r;
      
        
    }
   
}