#include<iostream>
using namespace std;
int main(){
   float cp;//cost price
   cout<<"enter the cost price:- ";
   cin>>cp;
   float sp;//selling price
   cout<<"enter selling price:- ";
   cin>>sp;
   //if(sp>cp) cout<<"profit";
   //if(sp<cp) cout<<"loss";
   //if(sp==cp) cout<<"no profit no loss";
     if(sp>cp) cout<<"profit:-"<<sp-cp;
     else if(sp<cp) cout<<"loss is:-"<<cp-sp;
     else if(cp==sp) cout<<"no profit no loss";

}