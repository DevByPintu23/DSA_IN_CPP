#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter the number row:- ";
    cin>>row;
    
    for(int i=1; i<=row; i++){
        
       for(int j=1; j<=i; j++){
        if(i%2!=0) cout<<j<<" ";
        else cout<<char(64+j)<<" ";

    }
    cout<<endl;
}
}