#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number positive number:-";
    cin>>n;
    if(n>=1000 and n<=9999){
        cout<<n<<" it is four digit numer ";
    }else{
        cout<<n<<" it is not a four digit number";
    }
   
}