#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={-5,-8,-7,-9,-6,-3,-7,-5};
    int n = sizeof(arr)/4;
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
        }else{
            max=max;
        }
    }
    cout<<max;

}