#include <iostream>
#include <stack>
#include <string>
using namespace std;

int longestValidParentheses(string s) 
{
    stack<int> st;
    st.push(-1);
    int maxLen = 0;
    for (int i = 0; i < s.length(); i++) 
    {
        char ch = s[i];
        if (ch == '(') 
        {
            st.push(i);
        } 
        else 
        {
            st.pop();
            if (st.empty()) 
            {
                st.push(i);
            } 
            else 
            {
                int len = i - st.top();
                maxLen = max(maxLen, len);
            }
        }
    }
    return maxLen;
}

int main() 
{
    string input;
    cout << "Enter a string of parentheses: ";
    cin >> input;

    int result = longestValidParentheses(input);
    cout << "Longest valid parentheses length: " << result << endl;

    return 0;
}


