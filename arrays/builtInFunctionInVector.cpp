#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
 vector<int> v={7,5,2,8,9};
 sort(v.begin(),v.end());
 reverse(v.begin(),v.end());
 for(int ele : v){
  cout<<ele<<" ";
 }
  
}
