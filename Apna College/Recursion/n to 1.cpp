#include <iostream>
using namespace std;
//Descending order from n to 1
void func(int n){
    if(n==0) return ;
    cout<<n<<" ";
    return func(n-1);
}
//Ascending order from n to 1
void func2(int n){
    if(n==0) return ;
     func2(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    func2(n);
    return 0;
}