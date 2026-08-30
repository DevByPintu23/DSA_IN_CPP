#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s;
cout<<"enter the string:";
getline(cin,s);
int n=s.length();
for(int i=0; i<n; i++){
    for(int j=1; j<=n-i; j++){
      
        string sub=s.substr(i,j);
        cout<<sub;
        cout<<" ";
       
    }
    
}
}