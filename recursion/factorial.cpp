#include <iostream>
using namespace std;

int fact(long long n){
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}
int main() {
    long long n;
    cout<<"enter the number:";
    cin>>n;
    fact(n);
    cout<<fact(n);
    

   
}