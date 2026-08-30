#include<iostream>
#include<string>
using namespace std;
int main(){
string s;
cout<<"enter string:";
getline(cin,s);
int n=s.length();
for(int i=0; i<n; i++){
    if(char(s[i])>=65 and char(s[i])<=90){
        (s[i]) +=32;
    }
    else if(char(s[i])>=97 and char(s[i])<=120){
        (s[i]) -=32;
    }
}


cout<<s;
}