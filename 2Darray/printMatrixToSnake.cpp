#include<iostream>
#include<Climits>
using namespace std;
int main(){
    //int arr[3][4];
    int arr[3][4]={{1,4,8,4},{5,7,8,9},{4,7,8,9}};
    int row=3,col=4;
    for(int i=0;i<3; i++){
        if(i%2==0){
      
       for(int j = 0; j<4; j++){
        cout<<arr[i][j]<<" ";
        
       }
         }
         else{
             for(int j =3; j>=0; j--){
        cout<<arr[i][j]<<" ";

         }
    }
        
}
}