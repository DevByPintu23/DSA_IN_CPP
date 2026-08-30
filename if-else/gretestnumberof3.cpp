#include<iostream>
using namespace std;
int main(){
   int x , y, z;
   cout<<"enter three number";
   cin>>x>>y>>z;
   if(x>y and x>z){
    cout<<x<<" it is gretest of three";
  
}
   else if(y>x and y>z){
    cout<<y<<" it is gretest of three";
  
}
   else if(z>y and z>x){
    cout<<z<<" it is gretest of three";
  
}
   if(x==y and y==z and z==x){
    cout<<x <<y << z<<"are equal";
  
}
}