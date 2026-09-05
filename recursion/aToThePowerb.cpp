#include <iostream>
using namespace std;

int pow(int a, int b){
    if(b==0) return 1;
    int p = pow(a,b/2);
    if(b%2==0) return p*p;
    else   return p*p*a; 
}
int main() {
   int a;
   cout<<"enter the base:";
   cin>>a;
   int b;
   cout<<"enter the power:";
   cin>>b;
   pow(a,b);
   cout<<pow(a,b);
    

   
}