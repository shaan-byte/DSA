#include<bits/stdc++.h>
class Solution {
    public:
      int maximumSumSubarray(vector<int>& arr, int k) {
          int n=arr.size();
          int curr=0;
          int res=INT_MIN;
          for(int i=0;i<k;i++){
              curr=curr+arr[i];
               res=curr;
          }
          for(int i=k;i<n;i++){
              curr=curr+arr[i]-arr[i-k];
              res=max(res,curr);
          }return res;
      }
  };