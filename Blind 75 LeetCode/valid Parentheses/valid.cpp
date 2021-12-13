#include <iostream>
#include <stack>

using namespace std;

bool validParentheses(string s) {
    stack<char> stack;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack.push(s[i]);
        } else if(s[i] == ')') {
            if (!stack.empty() && stack.top() == '(') {
                stack.pop();
            } else{
                return false;
            }
        } else if (s[i] == '}') {
            if (!stack.empty() && stack.top() == '{') {
                stack.pop();
            } else {
                return false;
            }
        } else if (s[i] == ']') {
            if (!stack.empty() && stack.top() == '[') {
                stack.pop();
            } else {
                return false;
            }
        }
    }
    if (!stack.empty()) { // if stack is not empty, that means there is a parentheses that doesn't match
        return false;
    }

    return true;
}

int main() {
    string s = "({})";
    cout << validParentheses(s) << endl;
    
}