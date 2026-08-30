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
int i=0;
int j=n/2;
for(int i=0; i<n/2; i++){
    int temp=s[i];
    s[i]=s[j];
    s[j]=temp;
}
cout<<s;

}