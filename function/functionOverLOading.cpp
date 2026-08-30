
#include<iostream>
using namespace std;

void fun(){
    cout<<"good morning"<<endl;
}
void fun(int x){
 cout<<x<<endl;
}
void fun(int x,int y){
 cout<<x+y<<endl;
}
int main(){
    fun();
    fun(5);
    fun(5,7);
   

}