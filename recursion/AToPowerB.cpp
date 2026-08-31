#include <iostream>
using namespace std;

int pow(int a, int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
   
}
int main() {
   int a;
   cout<<"enter the base";
   cin>>a;
   int b;
   cout<<"enter the power";
   cin>>b;
   pow(a,b);
   cout<<pow(a,b);
    

   
}