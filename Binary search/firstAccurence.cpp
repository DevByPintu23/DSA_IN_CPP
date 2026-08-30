#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={2,3,4,5,6,8,9,12,15,19};
    int target =19;
    int n=arr.size();
    int low=0;
    bool flag=false;
    int hgh=n-1;
         int mid;
        while(low<=hgh){
            mid=(low+hgh)/2;
            if(arr[mid]==target){
                
                flag=true;
                break;
            }
            else if(arr[mid]>target) hgh=mid-1;
            else{
                low=mid+1;
            }
        }
        if(flag==true) cout<<"the target index is: "<<mid;
        else cout<<"target not found";
       
    }