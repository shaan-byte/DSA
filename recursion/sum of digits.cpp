#include<iostream>
using namespace std;
int sum=0;
int sumofdigits(int n){
    if (n==0)
    {
        return 0;
    }
    else{
        return n%10+sumofdigits(n/10);
    }
}   int main(){
    int a;
    cin>>a;
    cout<<sumofdigits(a);
}