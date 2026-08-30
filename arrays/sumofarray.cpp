#include<iostream>
using namespace std;
int main(){
    int sum=0;
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
        sum=sum+arr[i];

      

    }
cout<<"the sum of array is= "<<sum;

}