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
    int count=1;
    int maxcount=-9999;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0 && arr[i+1]%2!=0)
        {
            count++;
        }
        else if(arr[i]%2!=0 && arr[i+1]%2==0){
            count++;
        }
        maxcount=max(count,maxcount);
    }cout<<"Max count"<<maxcount;
}
    