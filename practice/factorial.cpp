#include<iostream>
using namespace std;
int main(){
    int res=1;
    int n;
    cin>>n;
    for (int i = 2; i <=n; i++)     //iterative solution
    {
        res=res*i;
    }
    cout<<res;
}