#include<iostream>
#include<vector>
using namespace std;
int main(){
   int m, n;
   cout<<"enter row: ";
   cin>>m;
   cout<<"enter col: ";
   cin>>n;
   vector<vector<int>> arr(m,vector<int>(n,0));
   arr.push_back(vector<int> (4,-1));


   for(int i=0; i<arr.size(); i++){
    for(int j=0; j<arr[i].size(); j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
}