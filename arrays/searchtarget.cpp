#include<iostream>
using namespace std;
int main(){
    int i;
    int x;
    cout<<"enter the target element: ";
    cin>>x;
    bool flag=false;
    int arr[] = {5,8,79,5,2,46,9,7,4,8,9,1,4,7};
    int n = sizeof(arr)/4;
    for(i=0; i<n; i++){
        if(arr[i]==x){
            
            flag=true;
            break;
        }
    }
    if(flag==true) cout<<"the index of element: "<<i;
    else cout<<"element not found";
}