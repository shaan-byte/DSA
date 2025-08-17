#include<iostream>
using namespace std;

// Function to calculate the sum of first n natural numbers
int sumofn(int n){
    if(n==0) return 0;
    return n+sumofn(n-1);
}

int main(){
    int n;
    cin>>n;
    int ans=sumofn(n);
    cout<<ans;
    return 0;
}