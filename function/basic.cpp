#include<iostream>
using namespace std;
void pintu(){
    cout<<"pintu is a cute girl"<<endl;
}
void mintu(){
    cout<<"mintu is a cute girl"<<endl;
    pintu();
}
void bittu(){
    cout<<"bittu is a cute girl"<<endl;
    mintu();
}

int main(){
    
    bittu();
    pintu();
}