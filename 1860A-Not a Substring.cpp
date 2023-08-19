    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
      int t;
      cin >> t;
      while (t--) {
    	string s;
    	cin >> s;
    	int n = s.size();
    	string a, b;
    	for (int i = 0; i < 2 * n; ++i) {
    	    /*
    The for loop generates two strings a and b based on the calculated size n.
     
    a += "()"[i & 1]; appends "()" characters to string a alternately based on the least significant bit of i (i & 1).
     
    b += ")("[i < n]; appends ")(" characters to string b based on whether i is less than n.
    */
    	  a += "()"[i & 1];
    	  b += ")("[i < n];
    	}
    	/*
    	a.find(s) == string::npos checks if the input string s can be found within the string a. If not found (string::npos represents "not found"), it means that string a doesn't contain s.
     
    Similarly, b.find(s) == string::npos checks if the input string s can be found within the string b.
    	*/
    	if (a.find(s) == string::npos) {
    	  cout << "YES\n" << a << '\n';
    	} else if (b.find(s) == string::npos) {
    	  cout << "YES\n" << b << '\n';
    	} else {
    	  cout << "NO\n";
    	}
      }
    }
