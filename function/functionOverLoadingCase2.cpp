
#include<iostream>
using namespace std;

void fun(char x){
    cout<<"hii"<<endl;
}
void fun(int x){
 cout<<"goor afternoon"<<endl;
}
void fun(double x){
 cout<<"good morning"<<endl;
}
int main(){
    fun(7.2);
    fun('a');
    fun(5);
   

}