#include<iostream>
#include<string>
// #include<algorithm>
using namespace std;
int main(){
string s="pintu";
string sub=s.substr(0,3);
cout<<sub<<endl;
sub=s.substr(1,3);
cout<<sub<<endl;
sub=s.substr(2);
cout<<sub<<endl;
}