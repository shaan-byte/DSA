#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;
    int temp=min(a,b);
    while (temp>0)
    {
        if (a%temp==0 && b%temp==0)
        {
            cout<<temp;
            break;
        }
        temp--;
    }
}