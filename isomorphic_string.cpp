#include <iostream>
#include <string>
using namespace std;


bool isIsomorphic(string s, string t) {
    int hash[256] = {0};
    int istCharMapped[256] = {0};
    for(int i = 0; i < s.size(); i++) {
        if(hash[s[i]] == 0 && istCharMapped[t[i]] == 0) {
            hash[s[i]] = t[i];
            istCharMapped[t[i]] = true;
        }
    }
    for(int i = 0; i < s.size(); i++) {
        if(char(hash[s[i]]) != t[i]) {
            return false;
        }
    }
    return true;
}


int main() {
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    cout<<isIsomorphic(s,t)<<endl;
    return 0;
}
