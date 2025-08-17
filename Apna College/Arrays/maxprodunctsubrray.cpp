#include<bits/stdc++.h>
using namespace std;
// Function to find the maximum product subarray
int maxProductSubarray(vector<int>& arr) {
    int prefix=1;int suffix=1;int maxi=INT_MIN;
    int n=arr.size();
    for(int i=0;i<n;i++){
        prefix*=arr[i];
        suffix*=arr[n-1-i];
        maxi=max(maxi,max(prefix,suffix));
        if(prefix==0)prefix=1;
        if(suffix==0)suffix=1;
    }
    return maxi;
}
int main(){
    vector<int> arr = {1, 2, -4, 4, 5};
    cout << "Maximum product subarray: " << maxProductSubarray(arr) << endl;
}