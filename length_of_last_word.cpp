#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int lengthOfLastWord(string s) 
{
    int end = s.length() - 1;
    while (end >= 0 && s[end] == ' ') 
    {
        end--;
    }
    reverse(s.begin(), s.begin() + end + 1);
    int count = 0;
    for (int i = 0; i < s.length(); i++) 
    {
        if (s[i] == ' ') 
        {
            break;
        } 
        else 
        {
            count++;
        }
    }
    return count;
}

int main() {
    string s;
    getline(cin,s);
    cout << "Length of last word in "<<s<<" is : " <<lengthOfLastWord(s) << endl;

    return 0;
}
