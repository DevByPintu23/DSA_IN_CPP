#include<iostream>
#include<climits>
using namespace std;
void change(int y[]){
    y[0]=20;
}
int main(){
   int x[] ={7,8,9,7,4};
   change(x);
   cout<<x[0];
   
  
}