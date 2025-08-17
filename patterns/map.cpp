#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string> mpp;
    mpp.emplace(1,"Shaan");
    mpp.emplace(2,"Qureshi");
    for(auto itr:mpp){
        cout<<itr.first<<"-"<<itr.second<<endl;
    }
}