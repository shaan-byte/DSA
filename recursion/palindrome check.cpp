#include<iostream>
using namespace std;
int start=0;
string str;
int end=str.length()-1;
bool ispalindrome(string &str,int start,int end){
    if(start>=end){
        return true;
    }else if(str[start]!=str[end]){
        return false;
    }
    else{
        return str[start]==str[end]&&ispalindrome(str,start+1,end-1);
    }
}
int main(){
    string s;
    cin>>s;
    cout<<ispalindrome(s,start,s.length()-1);
}