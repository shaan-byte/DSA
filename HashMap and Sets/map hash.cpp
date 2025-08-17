cgit#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size";
    cin>>n;
    cout<<"Enter elements of array";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];            //taking input array
    }
    
    
    map<int,int>mpp;                
    for (int i = 0; i < n; i++)     //matching with map and incrementing
    {
        mpp[arr[i]]++;
    }
    
    int q;
    cin>>q;
    while (q--)
    {
        int number;         //taking input for comparing
        cin>>number;
        cout<<mpp[number]<<"->"<<endl;
    }
    return 0;
}