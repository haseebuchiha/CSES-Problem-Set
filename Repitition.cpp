#include<bits/stdc++.h>
using namespace std;

typedef size_t S;

int main(void) {
    
    string s;
    S longest = 0, count = 0;
    cin >> s;
    char a = s[0];
    for (S i = 0; i < s.size(); i++) {
        if (a == s[i]) {
            count++;
            if (count > longest) longest = count;
        }
        else {
            count = 0;
            a = s[i];
            --i;
        }
    }
    cout << longest;
    return 0;
}