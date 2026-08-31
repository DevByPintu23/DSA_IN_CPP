#include <iostream>
using namespace std;

void pintu(int n) {
    
    if(n==0) return;
    cout <<n<<" ";
    pintu(n-1);
}
int main() {
    int x;
    cout<<"enter the number:";
    cin>>x;
    pintu(x);
    

   
}