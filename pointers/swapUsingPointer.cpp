#include<iostream>
using namespace std;
void change(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 7;
    int y = 5;
    change(&x,&y);
    cout<<x<<" "<<y;
    
}