#include<iostream>
using namespace std;
int main(){
int i;
int count=0;
int n;
cin>>n;
if (n<=0)
{
    cout<<"invalid number";
}else{
    for ( i = 1; i <=n; i++)
    {
        if(n%i==0){
            count++;
        }
    }
    if(count>2){
        cout<<"not prime";
    }else{
        cout<<"prime";
    }
    return 0;
}
}