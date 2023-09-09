#include <bits/stdc++.h>
using namespace std;
/* 
(c - '0'): This part of the expression is converting a character c representing a digit 
into its corresponding integer value. In ASCII encoding, the characters '0' to '9' have 
consecutive integer values from 48 to 57. By subtracting the ASCII value of '0'
(which is 48), you're converting the character 'c' to its integer equivalent. 
For example, if c is '5', then (c - '0') evaluates to 5.
*/

int main () {
    string s; cin >> s;
    int n = s.size();
    for (char c : s) {     //if string of size 1
        if ((c-'0')%8==0) {
            cout << "YES\n" << c << "\n";
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {   //if string of size 2
        for (int j = i+1; j < n; j++) {
            int ans = (s[i]-'0')*10 + (s[j]-'0');
            if (ans%8==0) {
                cout << "YES\n" << ans << "\n";
                return 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {   //if string of size 3 or more than that
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                int ans = (s[i]-'0')*100 + (s[j]-'0')*10 + (s[k]-'0');
                if (ans%8==0) {
                    cout << "YES\n" << ans << "\n";
                    return 0;
                }
            }
        }
    }
    cout << "NO\n";
}
