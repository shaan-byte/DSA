#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i)+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    char x='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<x;
            x++;
        }
        cout<<endl;
    }
}
void hollowrectangle(int n){
    for(int i=1;i<=n;i++){
        cout<<"*";
        for(int j=1;j<=(n-1);j++){
            if(i==1 || i==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"*";
        cout<<endl;
    }
}   
void invertedpyramid(int n){
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        //stars
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void diamond(int n){
    for(int i=1;i<=n;i++){
        //space
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=(2*i)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
        for (int i = 0; i <= n; i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=(2*(n-i))+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void butterfly(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for (int j = 1; j <=2*(n-i); j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 1; i <=n; i++)
    {
        for(int j = 1;j<=(n-i)+1;j++){
            cout<<"*";
        }
        for(int j = 1;j<=(2*i)-2;j++){
            cout<<" ";
        }
        for(int j = 1;j<=(n-i)+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void binary(int n){
    for(int i=1;i<=n;i++){
        bool b = (i%2==1);
        for (int j = 1; j <=i; j++)
        {
            cout<<b;
            b =!b;
        }
        cout<<endl;
    }
}
void rhombus(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void palindromepattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //nums backwards
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        //nums forwards
        for(int j=2;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    palindromepattern(n);
}
