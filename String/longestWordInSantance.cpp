#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s ="Arjun is the smartest";
int n = s.length();
int i=0;
int j=0;
int maxLen=0;
string ans="";
while(j<n){
    if(s[j]!=' ') j++;
    else{
        int len = j-i;
        if(len>maxLen) {
            maxLen=len;
            ans=s.substr(i,len);
        }
        // jump to next word
        i=j;
        while(i<n && s[i]==' ') {
            i++;
            j++; 
        } 

        
    }
    

}
int len = j-i;
        if(len>maxLen) {
            maxLen=len;
            ans=s.substr(i,len);
        }

cout<<maxLen<<" "<<ans<<endl;


}