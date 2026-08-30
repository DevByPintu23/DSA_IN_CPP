#include<iostream>
using namespace std;
int main(){
    //int arr[3][4];
    int arr[][4]={{1,4,8,4},{5,7,8,9},{4,7,8,9}};
    int sum=0;
    for(int i=0;i<3; i++){
       for(int j = 0; j<4; j++){
        cout<<arr[i][j]<<" ";
        sum +=arr[i][j];
       }
       cout<<endl;
    }
    cout<<sum;
}