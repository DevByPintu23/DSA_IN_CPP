#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& arr){
    for(int ele: arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}
int main(){
    //selection sort
    vector<int> arr={6,4,3,2,1};
    int n = arr.size();
    print(arr);
    
   for(int i=0; i<n-1; i++){
    int mn=arr[i] , mnIdx=i;
     for(int j=i; j<n; j++){
        if(arr[j]<mn){
            mn=arr[j];
            mnIdx=j;
        }
    }
        swap(arr[i],arr[mnIdx]);
   }
    
print(arr);
}