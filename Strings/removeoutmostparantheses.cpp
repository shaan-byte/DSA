#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int balance = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (balance > 0) res.push_back('('); // keep only inner '('
                balance++;
            } else { // s[i] == ')'
                balance--;
                if (balance > 0) res.push_back(')'); // keep only inner ')'
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    string s;

    cout << "Enter a parentheses string: ";
    cin >> s;

    string result = sol.removeOuterParentheses(s);
    cout << "After removing outer parentheses: " << result << endl;

    return 0;
}
