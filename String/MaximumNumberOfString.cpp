#include<iostream>
#include<string>
#include<algorithm>
#include<climits>

using namespace std;
int main(){
int ans=INT_MIN;
int idx=-1;
string arr[]={"-0123","-0023","-00182","-2901"};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<n; i++){
    int x=stoi(arr[i]);
    if(x>=ans) {
         ans=x;
         idx++;
    }
    else {
        ans=ans;
        
    }

}
cout<<ans<<endl;
cout<<idx<<endl;

}