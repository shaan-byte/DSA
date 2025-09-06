#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        for (int i = n - 1; i >= 0; i--) {
            // Check if the digit is odd
            if (num[i] == '1' || num[i] == '3' || num[i] == '5' || num[i] == '7' || num[i] == '9') {
                return num.substr(0, i + 1); // return substring up to this digit
            }
        }
        return ""; // no odd digit found
    }
};

int main() {
    Solution sol;
    string num;

    cout << "Enter a number string: ";
    cin >> num;

    string result = sol.largestOddNumber(num);
    if (result.empty()) {
        cout << "No odd number substring exists." << endl;
    } else {
        cout << "Largest odd number substring: " << result << endl;
    }

    return 0;
}
