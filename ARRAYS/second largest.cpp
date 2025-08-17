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
    int largest=0;
    int seclargest=-1;
    for (int i = 0; i < n; i++)
    {
        if(arr[largest]<arr[i]){
            seclargest=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest]){
            if(seclargest==-1 || arr[i]>arr[seclargest]){
                seclargest=i;
            }
        }
    }
    cout<<seclargest<<" Second largest";
}