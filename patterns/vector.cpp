#include<bits/stdc++.h>
using namespace std;
 int main(){
//     vector<int> v={2,4,5,7,8};
//     v.push_back(1);
//     for (auto itr = v.begin(); itr !=v.end(); itr++)
//     {
//         cout<<*itr<<" ";
//     }
//     cout<<endl;
//   for(auto x:v){
//     cout<<x<<" ";
//   }
    queue<int>q;
    q.push(2);
    q.emplace(5);
    q.emplace(3);
    cout<<q.back();
}