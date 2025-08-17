#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter string";
    cin>>s;
    int hash[26]={0};
    for (int i = 0; i <s.size(); i++)   //precompute
    {
        hash[s[i]-'a']++;
    }
    int q;
    cout<<"Enter no of char to search"<<endl;
    cin>>q;
    while (q--)
    {
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
    return 0;
}