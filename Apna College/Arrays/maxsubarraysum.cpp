#include<bits/stdc++.h>
using namespace std;
// Function to find the maximum subarray sum using Brute Force
int maxsubarraysum(vector<int> &arr, int n){
    int maxsum = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(sum>maxsum){
                maxsum = sum;
            }
        }
    }return maxsum;
}   

// Function to find the maximum subarray sum using better approach
int maxsubarraysum2(vector<int> &arr, int n){
    int maxsum = INT_MIN;
    for(int i=0;i<n;i++){
        int currsum = 0;
        for(int j=i;j<n;j++){
            currsum+=arr[j];
            maxsum=max(maxsum, currsum);
        }
    }return maxsum;
}

//kadane's algorithm to find the maximum subarray sum in O(n) time complexity
int Kadane(vector<int> &arr, int n){
    int maxsum=INT_MIN;
    int currsum=0;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum=max(maxsum, currsum);
    }return maxsum;
}

int main(){
    vector<int> arr = {1, -2, 3, 4, -1, 2, 1, -5, 4};
    int n = arr.size();
    int result = Kadane(arr, n);
    cout << "Maximum contiguous sum is " << result << endl;
    return 0;
}