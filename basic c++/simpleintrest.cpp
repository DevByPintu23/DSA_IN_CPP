//prt/100 simple intrest
#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<<"enter price:-";
    cin>>p;
    cout<<"enter rate of intrest:-";
    cin>>r;
    cout<<"enter time:-";
    cin>>t;
    float si=p*r*t/100;
    cout<<"the intrest of the principle is:=";
    cout<<si;
}