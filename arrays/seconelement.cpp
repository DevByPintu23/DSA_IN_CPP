#include<iostream>
#include<climits>
using namespace std;
int main(){
   
    int arr[] = {5,8,79,5,2,46,9,7,4,8,9,1,4,7};
    int n = sizeof(arr)/4;
    int mx=INT_MIN;
    for(int i=0; i<n; i++){
         if(arr[i]>mx) mx=arr[i];

        }
    int smx = INT_MIN;
    for(int i=0; i<n; i++){
         if(arr[i]> smx and arr[i]!=mx) smx=arr[i];

        }
    
   cout<<"first max: "<<mx<<" "<<"second max: "<<smx<<endl;
}