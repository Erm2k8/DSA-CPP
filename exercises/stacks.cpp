// Stacks exercises from https://leetcode.com/problems/valid-parentheses/

#include <iostream>
#include <stack>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
    private:
        stack<char> brackets;

        unordered_map<char, char> pairs = {
            {')', '('},
            {']', '['},
            {'}', '{'},
        };

    public:
        bool isValid(string s) {

            for (char c : s) {
                if (pairs.count(c) == 0) {
                    brackets.push(c);
                } else {
                    if (brackets.empty() || brackets.top() != pairs[c]) {
                        return false;
                    }
                    brackets.pop();
                }
            }
            
            return brackets.empty();
        }
    };

int main() {
    Solution sol;
    cout << sol.isValid("{()}[]") << endl; // true
    cout << sol.isValid("[{]((") << endl; // false

    return 0;
}