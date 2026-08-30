
#include<iostream>
using namespace std;
int x = 7; // global veriable
void change(){
    x = 23;
}
int main(){
    
    cout<<x<<endl;
    change();
    cout<<x<<endl;
}