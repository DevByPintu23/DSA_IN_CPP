#include<iostream>
using namespace std;
int main(){
   int x;
   cout<<"enter a number:-";
   cin>>x;
   if(x%5==0 and x%3==0){
    cout<<x<<" it is devisible by 5 and 3";
  
}
   else if(x%5==0){
    cout<<x<<" it is devisible by 5 ";
  
}
   else if(x%3==0){
    cout<<x<<" it is devisible by 3";
  
}else
   {
    cout<<x<<"are not devisible by 3 and 5 both";
  
}
}