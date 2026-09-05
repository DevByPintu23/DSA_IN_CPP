#include <iostream>
using namespace std;
int fibo(int n){
    if(n==0) return 0;
    if(n==1 or n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}

int main() {
   int n;
   cout<<"enter the n:";
   cin>>n;
   
   cout<<fibo(n);
    

   
}