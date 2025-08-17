#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool areAlmostEqual(string s1, string s2){;
        if(s1==s2) return true;
        vector<int> diff;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                diff.push_back(i);
            }
        }
        if(diff.size()>2) return false;
        if(diff.size()==0) return true;

        if(diff.size()==2){

            swap(s1[diff[0]],s1[diff[1]]);
            return s1==s2;
        }return false;
    }
    };
    
    int main() {
        Solution sol;
        string s1 = "bank";
        string s2 = "kanb";
        bool result = sol.areAlmostEqual(s1, s2);
        cout << (result ? "true" : "false") << endl;
        return 0;
    }
    