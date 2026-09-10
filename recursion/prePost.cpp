#include<iostream>
using namespace std;
void prePost(int n){
    if(n==0) return;
    cout<<n<<" ";
    prePost(n-1);
    cout<<n<<" ";
    prePost(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    prePost(n);
}
