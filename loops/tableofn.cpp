#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number to print table:-";
    cin>>n;
    
    for(int i=1; i<=10; i+=1){
        int y = n*i;
        cout<<n*i<<" ";
        //cout<<i<<" ";
    }
   
}