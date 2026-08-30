#include<iostream>
using namespace std;
int main(){
    int a ,b;
    cout<<"enter the a and b:-";
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    int temp = a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;



}