#include<bits/stdc++.h>
using namespace std;
int main(){
    int student[3][4];
    for(int i=0;i<=2;i++){
        for(int j=0;j<=3;j++){
            cin>>student[i][j];
        }
    }

    for(int i=0;i<=2;i++){
        for(int j=0;j<=3;j++){
            cout<<student[i][j]<<" ";
        }
    cout<<endl;   
    }

}