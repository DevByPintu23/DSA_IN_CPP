#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int> arr={10,20,30,40,50,60,70};
 int i=0, j = arr.size() - 1;
 int temp;
 while(i<j){
    temp=arr[i];
    arr[i] = arr[j];
    arr[j]=temp;
    i++;
    j--;
 }
 for(int ele: arr){
    cout<<ele<<" ";
 }
 
  
}
