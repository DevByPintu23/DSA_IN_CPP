#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s;
cout<<"enter the string:";
getline(cin,s);
int n=s.length();
string sub= s.substr(n/2);
cout<<sub;
}