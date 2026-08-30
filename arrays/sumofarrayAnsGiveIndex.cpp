#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={10,6,1,4};
   vector<int> ans(2);
   int target = 5;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    ans[0]=i;
                    ans[1]=j;
                    break;
                }
            }
        }
for(int i=0; i<2; i++){
    cout<<ans[i]<<" ";
}
    


  
}
