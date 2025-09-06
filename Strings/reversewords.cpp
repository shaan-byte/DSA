#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";

        // Reverse the entire string
        reverse(s.begin(), s.end());

        for (int i = 0; i < n; i++) {
            string word = "";
            // Collect characters for the current word
            while (i < n && s[i] != ' ') {
                word.push_back(s[i]);
                i++;
            }
            // Reverse the individual word
            reverse(word.begin(), word.end());

            // If word is not empty, add it to answer with a space
            if (!word.empty()) {
                ans += " " + word;
            }
        }

        // Remove leading space
        return ans.substr(1);
    }
};

int main() {
    Solution sol;

    string s;
    cout << "Enter a string: ";
    getline(cin, s); // allows input with spaces

    string reversed = sol.reverseWords(s);
    cout << "Reversed words: " << reversed << endl;

    return 0;
}
