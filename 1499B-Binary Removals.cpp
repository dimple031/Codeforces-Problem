    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
      int t;
      cin >> t;
      while (t--) {
        string s;
        cin >> s;
    /*
    The s.find("11") function searches for the first occurrence of the substring "11" in the string s and returns its position. If no such substring is found, it returns -1.
     
    The s.rfind("00") function searches for the last occurrence of the substring "00" in the string s and returns its position. If no such substring is found, it returns -1.
    */
        int i = s.find("11");
        int j = s.rfind("00");
        cout << (i != -1 && j != -1 && i < j ? "NO" : "YES") << endl;
    //checks if both "11" and "00" substrings were found in the string and if "11" appears before "00". If all these conditions are met, it evaluates to true, otherwise to false.
      }
    }

