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
    if(i%2!=0) s[i]='a';
}
cout<<s;

}