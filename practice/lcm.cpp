#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int res=max(a,b);       //LCM
    while (true)
    {
        if (res%a==0 && res%b==0)
        {
            cout<<res;
            break;
        }
        res++;
    }
    return 0;
}