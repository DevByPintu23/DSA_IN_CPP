#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    bool flag=false;
    cout<<"enter the number:- ";
    cin>>n;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            flag=true;
            break;   
    }
    }
    if(n==1) cout<<n<<" neither prime nor commposite";
    else if(flag==true){
        cout<<n<<" it is  composite number";
    }else{
        cout<<n<<" it is prime number";
    }
   
}