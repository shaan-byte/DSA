#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[11]={5,2,7,824,4,7,45,24,6,4,3};
    int count=0,round=0;
    for (int i = 0; i<11; i++)
    {
        if(arr[i]==7){
            count++;
        }else if(arr[i]==4){
            round++;
        }
    }
    cout<<count<<endl<<round;
}