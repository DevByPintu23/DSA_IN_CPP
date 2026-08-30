#include<iostream>
using namespace std;
void pintu(int n){
    cout<<n<<endl;
    if(n>20) return;
    cout<<n*n<<endl;
}
int main(){
    
    pintu(27);
    pintu(18);
}