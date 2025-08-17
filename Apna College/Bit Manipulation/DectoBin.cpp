#include<bits/stdc++.h>
using namespace std;

void DectoBin(int n){
    int num=n;
    int bin=0;
    int pow=1; 
    while(num!=0){
        int lastdigit = num%2;
        bin+=lastdigit*pow;
        pow*=10;
        num=num/2;
    }
    cout<<"The binary equivalent of the decimal number "<<n<<" is "<<bin<<endl;
}

int main(){
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    DectoBin(n);
    return 0;
}