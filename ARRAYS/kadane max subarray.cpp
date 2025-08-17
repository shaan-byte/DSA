#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maximum=arr[0];
    int sum=arr[0];
    for (int i = 1; i < n; i++)
    {
        sum=max(arr[i],arr[i]+sum);
        maximum=max(sum,maximum);
    }
    cout<<"Max subarray sum is"<<maximum;
}