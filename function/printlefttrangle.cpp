#include<iostream>
using namespace std;
void trangle(int n){//left trangle
   for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout<<"* ";
    }
    cout<<endl;
   }
   

}

int main(){
    int a;
    cout<<"enter the number a:-";
    cin>>a;
    trangle(a);
    int b;
    cout<<"enter the number b:-";
    cin>>b;
    trangle(b);
    int c;
    cout<<"enter the number c:-";
    cin>>c;
    trangle(c);
    
    
}