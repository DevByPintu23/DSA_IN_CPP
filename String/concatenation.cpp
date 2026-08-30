#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s1="pintu";
string s2="kumar";
string s= s1+" "+s2;
cout<<s<<endl;
s +=" singh";
cout<<s<<endl;
s.push_back(' 3');
cout<<s<<endl;
s.pop_back();
cout<<s<<endl;
sort(s1.begin(),s1.end());
cout<<s1<<endl;
}