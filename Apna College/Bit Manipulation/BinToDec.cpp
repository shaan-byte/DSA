#include<bits/stdc++.h>
using namespace std;
void bintodec(int n){
    int num = n;
    int dec=0;
    int pow=1;  //2^0=1
    while(num!=0){
        int lastdigit = num%10;
        dec+=lastdigit*pow;
        pow*=2;
        num=num/10;
    }
    cout<<"The decimal equivalent of the binary number "<<n<<" is "<<dec<<endl;
}

int main(){
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;
    bintodec(n);
    return 0;
}
// Output: The decimal equivalent of the binary number