#include <iostream>
#include <string>
using namespace std;

//check if a substring is a palindrome
bool isPalindrome(string &s, int i, int j) 
{
    while (i < j) 
    {
        if (s[i] != s[j]) 
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

//find the longest palindromic substring
string longestPalindrome(string s) 
{
    string ans = "";
    for (int i = 0; i < s.size(); i++) 
    {
        for (int j = i; j < s.size(); j++) 
        {
            if (isPalindrome(s, i, j))
            {
                string t = s.substr(i, j - i + 1);
                ans = t.size() > ans.size() ? t : ans;
            }
        }
    }
    return ans;
}

int main() 
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    
    string result = longestPalindrome(s);
    cout << "Longest Palindromic Substring: " << result << endl;
    
    return 0;
}
