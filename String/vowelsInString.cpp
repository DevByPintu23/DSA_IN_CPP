#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s;
cout<<"enter a string:";
getline(cin,s);
int count=0;
int n=s.length();
for(int i=0; i<n; i++){
    if(s[i]=='a') count++;
    if(s[i]=='e') count++;
    if(s[i]=='i') count++;
    if(s[i]=='o') count++;
    if(s[i]=='u') count++;
    if(s[i]=='A') count++;
    if(s[i]=='E') count++;
    if(s[i]=='I') count++;
    if(s[i]=='O') count++;
    if(s[i]=='U') count++;
}
cout<<count;

}