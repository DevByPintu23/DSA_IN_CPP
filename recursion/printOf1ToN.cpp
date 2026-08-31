#include <iostream>
using namespace std;
int n;
void print(int x){
    if(x>n) return;
    cout<<x<<" ";
    print(x+1);
}
int main() {
 
    cout<<"enter the number:";
    cin>>n;
    print(1);
    
    

   
}