#include<iostream>
using namespace std;
int main(){
   
    int n;
    cout<<"enter the number:-";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"enter the element:";
        cin>>arr[i];

    }
    //print negative value of array
    for(int i=0; i<n; i++){
        if(arr[i]<0) cout<<arr[i]<<" ";
      

    }


}