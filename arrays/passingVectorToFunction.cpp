#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> v){ // pass by value
    v[2]=99;
}
/*void change(vector<int>& v){ // pass by referance
    v[2]=99;
}*/

int main(){
 vector<int> v={7,5,2,8,9};
 change(v);
 cout<<v[2];
  
}
