#include<iostream>
using namespace std;
int main(){
   int x , y, z;
   cout<<"enter three number";
   cin>>x>>y>>z;
   if(x+y>z and y+z>x and z+x>y){
    cout<<z <<y << z<<" it is side of trange";
   }else{
    cout<<"it is not side of trangle ";
   }
}