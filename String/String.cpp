#include<iostream>
#include<string>
using namespace std;
int main(){
    
    
    string s;
    getline(cin,s);
    s[0]='m';
    cout<<s<<endl;
    cout<<s<<endl;
    int n=s.length();
    for(int i=0; i<n; i++){
        cout<<s[i];
    }
    
}