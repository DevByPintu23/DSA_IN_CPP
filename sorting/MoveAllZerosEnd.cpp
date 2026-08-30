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
    vector<int> arr={9,0,-2,8,-5,0,0,7,0,8,-9,-7,2,8,6};
    int n = arr.size();
    print(arr);
    for(int i =0; i<n-1; i++){
        int swaps = 0;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]==0){
        swap(arr[j],arr[j+1]);
        swaps++;
    }
}

    }
print(arr);
}