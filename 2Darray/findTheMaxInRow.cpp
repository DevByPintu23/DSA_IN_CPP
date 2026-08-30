#include<iostream>
#include<Climits>
using namespace std;
int main(){
    //int arr[3][4];
    int arr[][4]={{1,4,8,4},{5,7,8,9},{4,7,8,9}};
    int maxRow=-1, maxSum=INT_MIN;
    for(int i=0;i<3; i++){
        int sum=0;
       for(int j = 0; j<4; j++){
        sum +=arr[i][j];
        
       }
       if(sum>maxSum){
        maxSum=sum;
        maxRow=i;
       }
      
    }
    cout<<"the max sum of row is =      "<<maxSum<<endl;
    cout<<"the row of max sum is = "<<maxRow;
}