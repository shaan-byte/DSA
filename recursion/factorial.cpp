#include<iostream>
using namespace std;
int k=1;
int fac(int n,int k){
    if(n==0 || n==1){
        return k;
    }else{
        return fac(n-1,k*n);        //tail recursion
    }
}

int fac1(int n){
    if (n==0 || n==1)
    {
        return 1;
    }else{
        return n*fac1(n-1);     //non tail recursion
    }
    
}
int main(){
    int n;
    cin>>n;
    cout<<fac1(n);
    return 0;
}