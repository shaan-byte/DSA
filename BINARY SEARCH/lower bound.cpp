#include<bits/stdc++.h>
using namespace std;
function lowernound(vector<int> &arr,int target){
    int low=0;
    int n=arr.size();
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=target){   //upper bound remove equal to thats it
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }return ans;
}