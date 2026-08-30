#include<iostream>
#include<string>
using namespace std;
int main(){
int n;
cout<<"enter a number ";
cin>>n;
string s = to_string(abs(n));  // if number negative to_string(abs(n));
cout<<s.length();
// if number negative 
// if(n>=0) cout<<s.length();
// else cout<<s.length()-1;

}