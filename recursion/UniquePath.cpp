#include <iostream>
using namespace std;

void paths(int m, int n, string s) {
    if(m==1 and n==1){
        cout<<s<<endl;//right path
        return;
    }
    if(m==0 or n==0) return ;
    paths(m,n-1,s+"R");// right
    paths(m-1,n,s+"D");// down
    
}
int main() {
    int m;
    cout<<"enter the number m:";
    cin>>m;
    int n;
    cout<<"enter the numbe n:";
    cin>>n;
    paths(m,n,"");

   
}