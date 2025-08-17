#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first=0;
    int second=1;
    for(int i=2; i<=n; i++){
        int third=first+second;
        cout<<third<<" ";  //Print the third Fibonacci number
        first=second;
        second=third;
    }
}