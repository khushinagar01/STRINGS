#include <iostream>
#include <stack>
#include <vector>
using namespace std;

bool isValid(string s) 
{
    if (s[0] != 'a') 
    {
        return false;
    }
    stack<char> st;
    for (char ch : s) 
    {
        if (ch == 'a') 
        {
            st.push('a');
        } 
        else if (ch == 'b') 
        {
            if (!st.empty() && st.top() == 'a') 
            {
                st.push('b');
            } 
            else 
            {
                return false;
            }
        } 
        else if (ch == 'c') 
        {
            if (!st.empty() && st.top() == 'b') 
            {
                st.pop();
                if (!st.empty() && st.top() == 'a') 
                {
                    st.pop();
                } 
                else 
                {
                    return false;
                }
            } 
            else 
            {
                return false;
            }
        } 
        else 
        {
            // invalid character
            return false;
        }
    }
    return st.empty();
}

int main() {
    string s;
    getline(cin,s);
    
    cout<<isValid(s)<<endl;

    return 0;
}
