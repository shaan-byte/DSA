#include<iostream>
using namespace std;
int natural(int n){
    if(n==0){
        return 0;
    }else{
        return n+natural(n-1);
    }
}int main(){
    int n;
    cin>>n;
    cout<<natural(n);
}